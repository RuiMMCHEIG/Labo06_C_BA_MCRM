/*
-----------------------------------------------------------------------------------
Filename        : display.h
Author(s)       : Rui Manuel Mota Carneiro, Aurélien Bloch
Creation date   : 20.11.2021

Description     : Functions to display multiple types of values

Comment(s)      :

Compiler        : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#ifndef DISPLAY_H
#define DISPLAY_H

#include <string>

/// This functions displays a table of int
/// @param message Message to display before the table
/// @param nbColumns Number of columns to display the table in
/// @param spacePerValue Space allowed for each value
/// @param table Table 1D of unsigned to display
/// @param tableSize Size of the table to display
void displayTable(const std::string& message, unsigned nbColumns, int spacePerValue,
                  const int table[], size_t tableSize);

/// This functions displays a table of bool
/// @param message Message to display before the table
/// @param nbColumns Number of columns to display the table in
/// @param spacePerValue Space allowed for each value
/// @param table Table 1D of bool to display
/// @param tableSize Size of the table to display
/// @param trueChar Character to display when a value is true
/// @param falseChar Character to display when a value is false
void displayTable(const std::string& message, unsigned nbColumns, int spacePerValue,
                  const bool table[], size_t tableSize,
                  char trueChar, char falseChar);

#endif //DISPLAY_H
