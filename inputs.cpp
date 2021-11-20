/*
  -----------------------------------------------------------------------------------
  File            : inputs.cpp
  Laboratory name : -
  Author(s)       : Rui Carneiro & Bastien Pillonel
  Creation date   : 09.11.2021
  Description     : Functions to obtain a value from the user
                    while checking his inputs

  Comment(s)      : Allows to setup a range for input values
                    Asks user inputs until value is correct and in range

  Compiler        : Mingw-w64 g++ 11.2.0
   -----------------------------------------------------------------------------------
*/

#include "inputs.h"

//Get Unsigned with range
unsigned getUnsigned(const string& message, unsigned min, unsigned max) {
   assert(min < max); //Sends an error if min and max don't make sense
   unsigned value;
   bool isIncorrect = true;
   do {
      cout << message << " [" << min << ".." << max << "] : ";
      if (not(cin >> value)) {
         cin.clear();
      }
      else if (value < min || value > max) {
         cout << "La valeur entree doit etre entre "
              << min << " et " << max << " : " << endl;
      }
      else {
         isIncorrect = false;
      }
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
   } while (isIncorrect);
   return value;
}

//Get Char without range
char getChar(const string& message) {
   char value;
   bool isIncorrect = true;
   do {
      cout << message << " : ";
      if (not(cin >> value)) {
         cin.clear();
      }
      else {
         isIncorrect = false;
      }
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
   } while (isIncorrect);
   return value;
}