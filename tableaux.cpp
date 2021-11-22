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
#include "tableaux.h"

#include <string>
#include <iostream>

using namespace std;

void supprimerElementTableau(int tableau[], const int TAILLE, const int index) {
   for (int idx = index; idx + 1 < TAILLE; ++idx) {
      tableau[idx] = tableau[idx + 1];
   }
}

void afficherTableauCrible(const int NOMBRE_CASES,
                           int valeurs[],
                           const int TAILLE_TABLEAU,
                           const int NOMBRE_COLONNES,
                           char affichageCrible,
                           char affichageNonCrible) {

   int idxValeurs = 0;

   for (int idxCases = 0; idxCases < NOMBRE_CASES; ++idxCases) {
      if (idxCases % NOMBRE_COLONNES == 0) {
         cout << endl;
      }
      bool aValeur = false;
      while (idxCases + 1 > valeurs[idxValeurs] and idxValeurs < TAILLE_TABLEAU) {
         ++idxValeurs;
      }
      aValeur = idxCases == valeurs[idxValeurs];
      cout << " " << (aValeur ? affichageNonCrible : affichageCrible) << " ";
   }
}

void afficherTableau(bool valeurs[], size_t taille, int colonnes, char carTrue, char carFalse) {
   for (unsigned long long idxCases = 0; idxCases < taille; ++idxCases) {
      if (idxCases % static_cast<unsigned long long int>(colonnes) == 0) {
         cout << endl;
      }else if (idxCases)
         cout << " ";
      cout << (valeurs[idxCases] ? carTrue : carFalse) << " ";
   }
   cout << endl;
}

void afficherTableau(int valeurs[], size_t taille, int colonnes) {
   for (unsigned long long idxCases = 0; idxCases < taille; ++idxCases) {
      if (idxCases % static_cast<unsigned long long int>(colonnes) == 0) {
         cout << endl;
      }else if (idxCases)
         cout << " ";
      cout << valeurs[idxCases] << " ";
   }
   cout << endl;
}

void convertirIntToBool(int valeursInt[], bool valeursBool[], size_t taille) {
   for (int idxValeurs = 0; idxValeurs < taille; ++idxValeurs) {
      valeursBool[idxValeurs] = valeursInt[idxValeurs] != 0;
   }
}