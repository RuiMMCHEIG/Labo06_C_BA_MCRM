/*
-----------------------------------------------------------------------------------
Filename        : numbers.cpp
Author(s)       : Rui Manuel Mota Carneiro, Aurélien Bloch
Creation date   : 20.11.2021

Description     : Numbers related functions

Comment(s)      :

Compiler        : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include "numbers.h"

// Remove non primes from a data
size_t removeNonPrimeNumbers(int data[], size_t size) {
   size_t primeNumbersCount = size;

   // If the data starts with 1, we put it at the end with a value of 0
   if (!(data[0] - 1)) {
      // Shifting all the values to the left
      for (size_t i = 0; i < size - 1; ++i) {
         data[i] = data[i + 1];
      }
      data[size - 1] = 0;
      // Removing the size of the first value
      --primeNumbersCount;
   }

   // Runs through all the cells
   for (size_t i = 0; i < size; ++i) {
      size_t currentSize = primeNumbersCount;
      // If the value is not 0,
      if (data[i]) {
         primeNumbersCount = 0;
         // Runs through all the next values
         for (size_t j = 0; j < currentSize; ++j) {
            // If not a prime number, set to 0
            if ((data[j] != data[i]) && !(data[j] % data[i])) {
               data[j] = 0;
            }
            // Else, move the element if there is a 0 before it (to put all the 0
            // at the end of the table)
            else {
               data[primeNumbersCount] = data[j];
               ++primeNumbersCount;
            }
         }
      }
   }
   // Put all the non-prime values remaining to 0
   for (size_t j = primeNumbersCount; j < size; ++j) {
      data[j] = 0;
   }

   return primeNumbersCount;
}

// Generates sucessive values in a table
void generateNumbers(int data[], size_t size, int min, int max) {
   int value = min;
   for (size_t index = 0; index < size && value <= max;
        ++value && ++index) {
      data[index] = value;
   }
}