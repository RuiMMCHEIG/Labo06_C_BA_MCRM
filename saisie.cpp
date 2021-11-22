/*
  ---------------------------------------------------------------------------
  Fichier     : saisie.cpp
  Nom du labo : Labo 5 - Chrono
  Auteur(s)   : Bloch Aurélien, Gonzalez Alexis
  Date        : 14.11.2021
  But         : Permettre des saisies utilisateurs de manière contrôlée,
                de plusieurs types et selon différentes règles (bornes, choix, ...)

  Remarque(s) :

  Compilateur : Mingw-w64 g++ 8.1.0
  ---------------------------------------------------------------------------
*/
#include "saisie.h"

#include <string>
#include <iostream>

using namespace std;

void viderBuffer() {
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int saisirValeurBornee(const string &texteQuestion, const int &MIN, const int &MAX,
                        const string &messageErreur) {
   int valeur;
   bool aErreur;
   do {
      cout << texteQuestion << " [" << MIN << ".." << MAX << "] ";
      cin >> valeur;

      aErreur = cin.fail() or valeur < MIN or valeur > MAX;
      if (aErreur) {
         cout << messageErreur << endl;
         cin.clear();
      }

      viderBuffer();
   } while (aErreur);
   cout << endl;
   return valeur;
}