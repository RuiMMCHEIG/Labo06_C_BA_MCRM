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

#ifndef LABO06_C_BA_MCRM_PRIME_H
#define LABO06_C_BA_MCRM_PRIME_H

/// Function to remove all non primes numbers from a table
/// @param table Table to wipe from 1 to Size
/// @param tableSize Size of the table
/// @return Size of the table after wipe
unsigned primeTable(unsigned table[], unsigned tableSize);

#endif //LABO06_C_BA_MCRM_PRIME_H
