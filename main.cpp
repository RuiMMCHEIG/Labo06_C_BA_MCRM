/*
-----------------------------------------------------------------------------------
Filename        : main.cpp
Laboratory name : Labo 6 - Crible
Author(s)       : Rui Manuel Mota Carneiro, Aurélien Bloch
Creation date   : 18.11.2021

Description     : Asks a value to the user and shows him all primes values up to
                  his selected number

Comment(s)      : Uses the Sieve of Eratosthenes method to find primes :
                     https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
                  Display of sieved tables
                  The input is controlled
                  Uses 1D array
                  Prints the tables on a determined number of columns (10)
                  It must be possible to display all values on one line

Compiler        : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>
#include "input.h"
#include "display.h"
#include "numbers.h"

using namespace std;

int main() {

   //==========
   // Constants
   //==========

   const unsigned MIN                           = 2,
                  MAX                           = 100,
                  MIN_NUMBER                    = 1,
                  NBR_COLUMNS_DISPLAYED         = 10,
                  SPACE_DISPLAYED_SIEVED_DATA   = 2,
                  SPACE_DISPLAYED_NUMBER        = 5;

   const string   WELCOME_MESSAGE         = "Bienvenue\n",
                  INPUT_SIZE_MESSAGE      = "Veuillez choisir le nombre de valeurs",
                  FIRST_SIEVE_TITLE       = "Not crible :",
                  SECOND_SIEVE_TITLE      = "Crible : ",
                  RESULT_SENTENCE_START   = "\nIl y a : ",
                  RESULT_SENTENCE_END     = " nombre premiers :\n",
                  GOODBYE_MESSAGE         = "Pressez ENTER pour quitter...";

   const char     TRUE_CHAR   = 'X',
                  FALSE_CHAR  = 'O';

   //==========
   // Variables
   //==========

   int primeNumbers[MAX];
   bool valuesIn[MAX];

   //===========
   // User input
   //===========

   cout << WELCOME_MESSAGE;
   const size_t size = (static_cast<size_t>(enterRangedValue(
      INPUT_SIZE_MESSAGE, MIN, MAX)));

   //Initialising all the data to false
   for (size_t i = 0; i < size; ++i) {
      valuesIn[i] = false;
   }

   //==========================
   // Generation of the numbers
   //==========================

   generateNumbers(primeNumbers, size, MIN_NUMBER, static_cast<int>(size));

   //================================================================
   // Display the sieved table before filtering the non-prime numbers
   //================================================================

   displayTable(FIRST_SIEVE_TITLE, NBR_COLUMNS_DISPLAYED,
                SPACE_DISPLAYED_SIEVED_DATA, valuesIn, size, TRUE_CHAR, FALSE_CHAR);

   //Remove all the non-prime numbers from the table and get the number of primes
   size_t primesCount = removeNonPrimeNumbers(primeNumbers, size);

   //===============================================================
   // Display the sieved table after filtering the non-prime numbers
   //===============================================================

   // Set bool table for display at the primes positions
   for (size_t i = 0; i < primesCount; ++i) {
      valuesIn[primeNumbers[i] - 1] = true;
   }

   cout << endl << endl;
   displayTable(SECOND_SIEVE_TITLE, NBR_COLUMNS_DISPLAYED,
                SPACE_DISPLAYED_SIEVED_DATA,
                valuesIn, size,
                TRUE_CHAR,
                FALSE_CHAR);

   //================================
   // Display the prime numbers found
   //================================

   cout << RESULT_SENTENCE_START << primesCount << RESULT_SENTENCE_END;
   displayTable("", NBR_COLUMNS_DISPLAYED, SPACE_DISPLAYED_NUMBER, primeNumbers,
                primesCount);

   cout << endl << endl << GOODBYE_MESSAGE;
   clearBuffer();

   return EXIT_SUCCESS;
}