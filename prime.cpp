/*
-----------------------------------------------------------------------------------
Filename        : prime.h
Author(s)       : Rui Manuel Mota Carneiro
Creation date   : 20.11.2021

Description     : Primes related functions

Comment(s)      :

Compiler        : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include "prime.h"

// Function to remove non primes
size_t primeTable(unsigned table[], size_t tableSize) {
   size_t newSize = tableSize;
   for (size_t i = !(table[0] - 1); i < tableSize; ++i) {
      size_t currentSize = newSize;
      // Ignores if value is 0
      if (table[i]) {
         newSize = !(table[0] - 1);
         for (size_t j = !(table[0] - 1); j < currentSize; ++j) {
            // Set to 0 if not prime
            if ((table[j] != table[i]) && !(table[j] % table[i])) {
               table[j] = 0;
            }
            // Moves element if there is a 0 before it
            else {
               table[newSize] = table[j];
               ++newSize;
            }
         }
         // Put values out of the new size to 0
         for (size_t j = newSize; j < currentSize; ++j) {
            table[j] = 0;
         }
      }
   }
   //Removes 1 from the table
   if (!(table[0] - 1)) {
      for (size_t i = 0; i < newSize - 1; ++i) {
         table[i] = table[i + 1];
      }
      table[newSize] = 0;
      --newSize;
   }

   return newSize;
}