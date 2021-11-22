/*
  ---------------------------------------------------------------------------
  Fichier     : saisie.h
  Nom du labo : Labo 5 - Chrono
  Auteur(s)   : Bloch Aurélien, Gonzalez Alexis
  Date        : 14.11.2021
  But         : Permettre des saisies utilisateurs de manière contrôlée,
                de plusieurs types et selon différentes règles (bornes, choix, ...)

  Remarque(s) :

  Compilateur : Mingw-w64 g++ 8.1.0
  ---------------------------------------------------------------------------
*/
#ifndef LABO_6_TABLEAUX_H
#define LABO_6_TABLEAUX_H

#include <cstddef>

void supprimerElementTableau(int tableau[], const int TAILLE, const int index);

void afficherTableauCrible(const int NOMBRE_CASES,
                           int valeurs[],
                           const int TAILLE_TABLEAU,
                           const int NOMBRE_COLONNES = 10,
                           char affichageCrible = 'X',
                           char affichageNonCrible = 'O');

void afficherTableau(bool valeurs[], size_t taille, int colonnes, char carTrue, char carFalse);

void afficherTableau(int valeurs[], size_t taille, int colonnes = 10);

void convertirIntToBool(int valeursInt[], bool valeursBool[], size_t taille);

#endif //LABO_6_TABLEAUX_H
