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

#include "prime.h"

// Function
unsigned primeTable(unsigned table[], unsigned tableSize) {
   unsigned newSize = tableSize;
   for (unsigned i = 1; i < tableSize; ++i) {
      unsigned currentSize = newSize;
      if (table[i]) {
         newSize = 1;
         for (unsigned j = 1; j < currentSize; ++j) {
            if ((table[j] != table[i]) && !(table[j] % table[i])) {
               table[j] = 0;
            } else {
               table[newSize] = table[j];
               ++newSize;
            }
         }
         for (unsigned j = newSize; j < currentSize; ++j) {
            table[j] = 0;
         }
      }
   }

   return newSize;
}