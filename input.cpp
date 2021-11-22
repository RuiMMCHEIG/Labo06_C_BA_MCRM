/*
  ---------------------------------------------------------------------------
  File        : input.cpp
  Author(s)   : Rui Manuel Mota Carneiro, Aurélien Bloch
  Date        : 22.11.2021
  Description : Functions for controlled user input
                Allows use of ranges

  Comment (s) :

  Compiler    : Mingw-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/
#include "input.h"

#include <string>
#include <iostream>
#include <limits>

using namespace std;

// Clear the buffer
void clearBuffer() {
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Asks user to input a value
int enterRangedValue(const string &label, const int MIN, const int MAX,
                        const string &errorMessage) {
   int value;
   bool hasError;
   do {
      cout << label << " [" << MIN << ".." << MAX << "] : ";
      cin >> value;

      hasError = cin.fail() or value < MIN or value > MAX;
      if (hasError) {
         cout << errorMessage << endl;
         cin.clear();
      }

      clearBuffer();
   } while (hasError);
   cout << endl;
   return value;
}