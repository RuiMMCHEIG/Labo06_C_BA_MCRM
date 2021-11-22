/*
-----------------------------------------------------------------------------------
Filename        : numbers.h
Author(s)       : Rui Manuel Mota Carneiro, Aurélien Bloch
Creation date   : 20.11.2021

Description     : Numbers related functions

Comment(s)      :

Compiler        : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#ifndef NUMBERS_H
#define NUMBERS_H

/// Function to remove all non primes numbers from a table
/// using the Sieve of Eratosthenes method
/// @param table Table to wipe from all non-prime numbers
/// @param size  Size of the table
/// @return      The size of the table after the wiping of non-prime numbers
size_t removeNonPrimeNumbers(int table[], size_t size);

/// Function to generate a table of successive values
/// @param data Table used to store numbers
/// @param size Size of the table
/// @param min  Min value
/// @param max  Max value
void generateNumbers(int data[], size_t size, int min, int max);

#endif //NUMBERS_H
