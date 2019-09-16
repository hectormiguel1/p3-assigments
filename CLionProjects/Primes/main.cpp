#include <iostream>
#include <cinttypes>
#include "PrimeSequence.h"

typedef unsigned __int128 uint128_t;
#define P10_UINT64 10000000000000000000ULL   /* 19 zeroes */
#define E10_UINT64 19

#define STRINGIZER(x)   # x
#define TO_STRING(x)    STRINGIZER(x)
using namespace std;
static int print_128_bit(__int128 u128);
int main() {
   PrimeSequence *sequencePointer;
   int startPoint = 0;
   int nthTerm = 0;

   cout << "Enter starting point of the sequence: " << endl;
   cin >> startPoint;
   cout << "Enter nth term to compute to: " << endl;
   cin >> nthTerm;

   PrimeSequence sequence = PrimeSequence(startPoint, nthTerm);
   sequencePointer = &sequence;

   for (int i = startPoint; i < (nthTerm + startPoint); i++ )
   {
       cout << "Current Term is " << i << "th Term: ";
       print_128_bit(sequence.nextPrime(i));
       cout << endl;

   }

}

static int print_128_bit( __int128 u128)
{
    int rc;
    if (u128 > UINT64_MAX)
    {
        uint128_t leading  = u128 / P10_UINT64;
        uint64_t  trailing = u128 % P10_UINT64;
        rc = print_128_bit(leading);
        rc += printf("%." TO_STRING(E10_UINT64) PRIu64, trailing);
    }
    else
    {
        long number = u128;
        cout << number;
    }
    return rc;
}