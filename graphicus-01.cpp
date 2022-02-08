/********
 * Fichier: graphicus-01.cpp
 * Auteurs: houa2209-pepw3101
 * Date: 17 janvier 2022 (creation)
 * Description: gestionnaire de tests pour l'application Graphicus. Ce
 *    fichier fait partie de la distribution de Graphicus.
********/
#include "tests.h"
#include "forme.h"
#include "cercle.h"
#include "rectangle.h"
#include "carre.h"
#include <iostream>
#include "vecteur.h"

using namespace std;

int main()
{
   Tests tests;

   tests.tests_unitaires();
   tests.tests_application();
   tests.validation();
   return 0;
}
