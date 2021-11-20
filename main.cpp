/*
-----------------------------------------------------------------------------------
Filename        : main.cpp
Laboratory name : Labo06_C - ???
Author(s)       : Rui Manuel Mota Carneiro
Creation date   : 18.11.2021

Description     :

Comment(s)      :

Compiler        : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>
#include "inputs.h"
#include "display.h"
#include "prime.h"

using namespace std;

int main() {

   const unsigned MIN =   1;
   const unsigned MAX = 100;

   string notCrible = "Pas crible";
   string crible    = "Crible";
   string prime     = "";

   cout << "Bienvenue\n";
   const unsigned size = getUnsigned("Inserez un nombre", 1, 100);

   unsigned primes[MAX];
   bool valuesIn[MAX];

   for (unsigned i = 0; i < size; ++i) {
      primes[i] = i + 1;
      valuesIn[i] = false;
   }

   displayTable("Pas crible", 10, 2, valuesIn, size, 'O', 'O');

   unsigned primeSize = primeTable(primes, size);

   for (unsigned i = 0; i < primeSize; ++i){
      valuesIn[primes[i] - 1] = true;
   }

   cout << endl << endl;

   displayTable("Crible", 10, 2, valuesIn, size, 'O', 'X');

   cout << "Il y a " << primeSize << " nombre premiers :\n";
   displayTable("", 10, 5, primes, primeSize);

   cout << endl << endl;

   return EXIT_SUCCESS;
}