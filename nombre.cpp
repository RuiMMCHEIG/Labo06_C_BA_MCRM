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
#include "nombre.h"
#include "tableaux.h"

#include <iostream>

using namespace std;

void genererNombresEntiers(int tableauValeurs[], const int TAILLE_TABLEAU, const int MIN,
                           const int MAX) {
   int      index        = 0;
   for (int nombreEntier = MIN;
        index < TAILLE_TABLEAU && nombreEntier <= MAX; ++nombreEntier && ++index) {
      tableauValeurs[index] = nombreEntier;
   }
}

unsigned trouverNombresPremiers(int nombres[], const int MAX, bool supprimerValeurs,
                                int valeurRemplacement) {
   int index        = 0;
   int tailleNombre = MAX;

   while (index < tailleNombre) {
      for (int idxPremiers = 0; idxPremiers < tailleNombre; ++idxPremiers) {
         if (nombres[index] == 1 || index == idxPremiers) {
            continue;
         }
         if (nombres[index] != 0 && (nombres[idxPremiers] % nombres[index] == 0 || nombres[idxPremiers] == 1)) {
            if (supprimerValeurs) {
               supprimerElementTableau(nombres, tailleNombre, idxPremiers);
               --tailleNombre;
            } else {
               nombres[idxPremiers] = valeurRemplacement;
            }
            continue;
         }
      }
      ++index;
   }

   cout << endl;

   return static_cast<unsigned int>(index);
}