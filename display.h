/*
-----------------------------------------------------------------------------------
Filename        : display.h
Author(s)       : Rui Manuel Mota Carneiro
Creation date   : 20.11.2021

Description     : Functions to display multiple values

Comment(s)      :

Compiler        : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO06_C_BA_MCRM_DISPLAY_H
#define LABO06_C_BA_MCRM_DISPLAY_H

#include <string>

/// This functions displays a table of unsigned
/// @param message Message to display before the table
/// @param nbColumns Number of columns to display the table in
/// @param spacePerValue Space allowed for each value
/// @param table Table 1D of unsigned to display
/// @param tableSize Size of the table to display
/// @return Nothing
void displayTable(const std::string& message, unsigned nbColumns, int spacePerValue,
                  unsigned table[], unsigned tableSize);

/// This functions displays a table of bool
/// @param message Message to display before the table
/// @param nbColumns Number of columns to display the table in
/// @param spacePerValue Space allowed for each value
/// @param table Table 1D of bool to display
/// @param tableSize Size of the table to display
/// @param trueChar Character to display when a value is true
/// @param falseChar Character to display when a value is false
/// @return Nothing
void displayTable(const std::string& message, unsigned nbColumns, int spacePerValue,
                  bool table[], unsigned tableSize, char trueChar, char falseChar);

#endif //LABO06_C_BA_MCRM_DISPLAY_H
