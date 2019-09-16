//
// Created by hector on 8/28/19.
//

#ifndef PRIMES_PRIMESEQUENCE_H
#define PRIMES_PRIMESEQUENCE_H


class PrimeSequence {
public:

        PrimeSequence(int size);
        PrimeSequence(int startPoint, int size);
        __int128_t nextPrime(int nthLocation);

private: void initializeArray(__int128 *arrayPointer, int startingPoint);
};


#endif //PRIMES_PRIMESEQUENCE_H
