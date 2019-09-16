//
// Created by hector on 8/28/19.
//

#include "PrimeSequence.h"
#define ZERO 0                 //Used for all 0 initializations.
#define DEFAULT_START_POINT 0 //Default starting point of array if no argument is passed.
#define NATURAL_POSITION_OFFSET 1 //Use to offset human language starting nth terms with 1st instead of 0th
#define FIRST_PRIME  1 //Used for base case checking.
#define PREVIOUS 1 //Used when recursively calling the nextPrime and decrementing the nth position value

__int128 *primesPointer = nullptr;

/**
 * Starts the prime sequence when the only the desired nth term is passed, starting point of 0 is assumed.
 * @param size : nth term desired
 */
PrimeSequence::PrimeSequence(int size) {
    __int128 primes[size + NATURAL_POSITION_OFFSET];
    primesPointer = primes;
    initializeArray(primesPointer, DEFAULT_START_POINT);
}

/**
 * Starts the prime sequence when the desired starting point of the sequence and the nth term is passed
 * @param startPoint : Desired starting point for the prime sequence
 * @param size : desired nth term after starting point
 */
PrimeSequence::PrimeSequence(int startPoint, int size) {
    __int128 primes[size + startPoint + NATURAL_POSITION_OFFSET];
    primesPointer = primes;
    initializeArray(primesPointer, startPoint);
}

/**
 * Intializes the prime sequence internal array to the desired starting point with zeros
 * @param arrayPointer : Pointer to the internal prime sequence array
 * @param startingPoint  : starting location for the prime sequence desired by user
 */
void PrimeSequence::initializeArray(__int128 *arrayPointer, int startingPoint) {
   for(int initializer = ZERO; initializer < sizeof(arrayPointer); initializer++)
   {
       arrayPointer[initializer] = ZERO;
   }

}

/**
 * Returns he prime at nthLocation
 * @param nthLocation : Prime at nth location to compute to
 * @return  nth prime
 */
__int128 PrimeSequence::nextPrime(int nthLocation){
        if(primesPointer[nthLocation] != ZERO)
        {
            return primesPointer[nthLocation];
        }
        if (nthLocation <= ZERO)
        {
            primesPointer[nthLocation] = FIRST_PRIME;
            return primesPointer[nthLocation];
        }
        else
        {
            if (nthLocation == ZERO || nthLocation == FIRST_PRIME) {
                primesPointer[nthLocation] = FIRST_PRIME;
            }
            else {
                primesPointer[nthLocation] = nextPrime(nthLocation - PREVIOUS);

            }
            return primesPointer[nthLocation];
        }
    }


