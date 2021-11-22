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
#ifndef LABO_6_SAISIE_H
#define LABO_6_SAISIE_H

#include <string>

// Gestion des saisies utilisateur

// nom         saisirValeurBornee
// but         Saisir une valeur int à l'intérieur de bornes min max avec une question et une gestion d'erreur
// param       texteQuestion    Le texte a afficher comme question avant la saisie
// param       valeur           La variable qui contiendra la valeur saisie
// param       MIN              La valeur min du bornage
// param       MAX              La valeur max du bornage
// param       messageErreur    Le message d'erreur a afficher
// return      rien
// exception   n/a
int saisirValeurBornee(const std::string &texteQuestion, const int &MIN, const int &MAX,
                        const std::string &messageErreur = "Erreur de saisie, veuillez réessayer");

// nom         viderBuffer
// but         Vider le cache simplement
// return      rien
// exception   n/a
void viderBuffer();

#endif //LABO_6_SAISIE_H