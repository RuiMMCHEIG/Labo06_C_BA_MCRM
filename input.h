/*
  ---------------------------------------------------------------------------
  File        : input.h
  Author(s)   : Rui Manuel Mota Carneiro, Aurélien Bloch
  Date        : 22.11.2021
  Description : Functions for controlled user input
                Allows use of ranges

  Comment (s) : The inputs are controlled

  Compiler    : Mingw-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/
#ifndef INPUT_H
#define INPUT_H

#include <string>

/// Allows the user to enter an int value inside a range of values and print an
/// error message if the entered data isn't within this range
/// @param label The message printed before the input
/// @param MIN The min value possible
/// @param MAX The max value possible
/// @param errorMessage The message to display if there's an error during the input
/// @return The int value entered by the user
int enterRangedValue(const std::string &label, int MIN, int MAX,
                     const std::string &errorMessage = "");

/// Clears the buffer
void clearBuffer();

#endif //INPUT_H