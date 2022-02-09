/********
 * Fichier: couche.h
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Declaration de la classe pour une couche dans un
 *    canevas. La classe Couche gere un vecteur de pointeur de formes
 *    geometriques en accord avec les specifications de Graphicus.
 *    Ce fichier fait partie de la distribution de Graphicus.
 ********/

#include "vecteur.h"
#include "forme.h"

#ifndef COUCHE_H
#define COUCHE_H

// i initialise
// a active
// x inactive
// c cache

class Couche
{
private:
   Vecteur<Forme *> *vecteur;
   char etat = 'i';

public:
   Couche();
   ~Couche();
   bool reinitialiser();
   bool ajouter(Forme *forme);
   Forme *retirer(int index);
   Forme *obtenir(int index);
   double aireTotale();
   bool translater(int deltaX, int deltaY);
   int getEtat();
   bool setEtat(char etat);
   void afficher(ostream &s);
   std::string toString();

   // TODO reinitialisation dune couche, vide vecteur et formes detruites, bool
};

#endif
