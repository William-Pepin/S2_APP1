/********
 * Fichier: canevas.h
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Declaration de la classe Canevas. La classe gere un
 *    tableau de couches en accord avec les specifications de Graphicus.
 *    Ce fichier fait partie de la distribution de Graphicus.
 ********/

#ifndef DESSIN_H
#define DESSIN_H

#include <iostream>
#include "forme.h"
#include "couche.h"
#include "vecteur.h"

const int AUCUNE_COUCHE_ACTIVE = -1;

using namespace std;

class Canevas
{
public:
   Canevas();
   ~Canevas();

   bool reinitialiser();

   bool activerCouche(int index);
   bool cacherCouche(int index);

   bool ajouterForme(Forme *p_forme);
   bool retirerForme(int index);
   bool ajouterCouche(Couche couche);
   bool retirerCouche(int index);

   double aire();
   bool translater(int deltaX, int deltaY);
   void afficher(ostream &s);
   bool estValide(int index);
   bool contientActive();
   std::string toString();

private:
   Vecteur<Couche> couches;
   int coucheActive = 0; // Index de la couche active
};

#endif
