/*
  -----------------------------------------------------------------------------------
  File            : inputs.h
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

#ifndef INPUTS_H
#define INPUTS_H

#include <iostream>
#include <cassert>
#include <limits>

using namespace std;

/*
Name        getUnsigned
Goal        Gets an unsigned integer in a range from the user
Param       message        Message to display to the user before the input
Param       min            Lower part of the range
Param       max            Higher part of the range
Return      Valid user input
Exception   n/a
*/
unsigned getUnsigned(const string& message, unsigned min, unsigned max);
/*
Name        getChar
Goal        Gets a character from the user
Param       message        Message to display to the user before the input
Return      Valid user input
Exception   n/a
*/
char getChar(const string& message);

#endif //INPUTS_H
