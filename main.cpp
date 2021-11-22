/*
  ---------------------------------------------------------------------------
  Fichier     : <fichier>.cpp
  Nom du labo : à compléter
  Auteur(s)   : Aurélien Bloch
  Date        : à compléter
  But         : le but du programme et non le but du laboratoire !!

  Remarque(s) : à compléter

  Compilateur : Mingw-w64 g++ 8.1.0
  ---------------------------------------------------------------------------
*/
#include <cstdlib>
#include <iostream>

#include "saisie.h"
#include "tableaux.h"
#include "nombre.h"

using namespace std;


int main() {

   const int NOMBRE_VALEURS_MIN = 2,
             NOMBRE_VALEURS_MAX = 100;

   size_t nombreValeurs;
   int      tableauValeurs[NOMBRE_VALEURS_MAX] = { 0 },
            tableauNombresPremiers[NOMBRE_VALEURS_MAX];
   bool     tableauAffichage[NOMBRE_VALEURS_MAX] = { false };

   nombreValeurs = (static_cast<size_t>(saisirValeurBornee(
      "Veuillez choisir le nombre de valeurs", NOMBRE_VALEURS_MIN,
      NOMBRE_VALEURS_MAX)));

   afficherTableau(tableauAffichage, nombreValeurs, 10, 'O', 'O');

   genererNombresEntiers(tableauValeurs, NOMBRE_VALEURS_MAX, 1, static_cast<int>(nombreValeurs));

   const unsigned nombresPremiers = trouverNombresPremiers(tableauValeurs,
                                                         static_cast<int>(nombreValeurs),
                                                         false);

   convertirIntToBool(tableauValeurs, tableauAffichage, nombreValeurs);

   afficherTableau(tableauAffichage, nombreValeurs, 10, 'O', 'X');

   afficherTableau(tableauNombresPremiers, nombresPremiers);

   return EXIT_SUCCESS;
}