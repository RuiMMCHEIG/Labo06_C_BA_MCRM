/*
-----------------------------------------------------------------------------------
Filename        : display.cpp
Author(s)       : Rui Manuel Mota Carneiro, Aurélien Bloch
Creation date   : 20.11.2021

Description     : Functions to display multiple types of values

Comment(s)      :

Compiler        : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>
#include <iomanip>         // setw()
#include <cassert>
#include "display.h"

using namespace std;

// Function to display a table of unsigned
void displayTable(const string& message, unsigned nbColumns, int spacePerValue,
                  const int table[], size_t tableSize) {
   cout << message << endl;
   for (size_t i = 0; i < tableSize; ++i) {
      cout << setw(spacePerValue) << table[i];
      if (i % nbColumns == nbColumns - 1) cout << endl;
   }
}

// Function to display a table of bool
void displayTable(const string& message, unsigned nbColumns, int spacePerValue,
                  const bool table[], size_t tableSize,
                  char trueChar, char falseChar) {
   cout << message << endl;
   assert(nbColumns > 0);
   for (size_t i = 0; i < tableSize; ++i) {
      cout << setw(spacePerValue) << (table[i] ? trueChar : falseChar);
      if (i % nbColumns == nbColumns - 1) cout << endl;
   }
}