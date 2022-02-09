/********
 * Fichier: canevas.cpp
 * Auteurs: houa2209-pepw3101
 * Date: 17 janvier 2022
 * Description: Implementation des methodes des classes decrites dans
 *    canevas.h. Ce fichier fait partie de la distribution de Graphicus.
 ********/

#include "canevas.h"
#include "vecteur.h"
#include <sstream>

Canevas::Canevas()
{
   couches = Vecteur<Couche>();
   // activerCouche(coucheActive);
}

Canevas::~Canevas()
{
}

bool Canevas::reinitialiser()
{
   couches = Vecteur<Couche>();
   coucheActive = 0;
   activerCouche(coucheActive);
   return true;
}

bool Canevas::activerCouche(int index)
{
   if (estValide(index))
   {
      if (coucheActive == index)

      {
         couches[coucheActive].setEtat('a');
         return true;
      }
      else
      {
         // la couche n'est pas active, on désactive et on change la couche active
         couches[coucheActive].setEtat('x'); // Désactive la couche
         couches[index].setEtat('a');        // On active la nouvelle couche
         coucheActive = index;               // On Keep track de la couche active
         return true;
      }
   }
   // l'index n'est pas valide, return false
   return false;
}

bool Canevas::cacherCouche(int index)
{
   if (estValide(index))
   {
      if (index == coucheActive)
      {
         // indique qu'il ne reste aucune couche active
         coucheActive = AUCUNE_COUCHE_ACTIVE;
      }
      couches[index].setEtat('c');
      return true;
   }
   return false;
}

bool Canevas::ajouterCouche(Couche couche)
{
   couches.ajouter(couche);
   return true;
}

bool Canevas::retirerCouche(int index)
{
   couches.retirer(index);
   return false;
}

bool Canevas::ajouterForme(Forme *p_forme)
{
   if (contientActive())
      return couches[coucheActive].ajouter(p_forme);
   return false;
}

bool Canevas::retirerForme(int index)
{
   if (contientActive())
   {
      Forme *forme = couches[coucheActive].retirer(index);
      if (forme == nullptr)
         return false;
      return true;
   }
   return false;
}

double Canevas::aire()
{
   double aireTotale = 0;

   for (int i = 0; i < couches.taille(); i++)
   {
      aireTotale += couches[i].aireTotale();
   }
   return aireTotale;
}

bool Canevas::translater(int deltaX, int deltaY)
{
   if (contientActive())
   {
      return couches[coucheActive].translater(deltaX, deltaY);
   }
   return false;
}

void Canevas::afficher(ostream &s)
{
   for (int i = 0; i < couches.taille(); i++)
   {
      s << "----- Couche " << i << endl;
      couches[i].afficher(s);
   }
}

bool Canevas::estValide(int index)
{
   if (index < 0 || index >= couches.taille())
   {
      return false;
   }
   return true;
}

bool Canevas::contientActive()
{
   if (coucheActive == AUCUNE_COUCHE_ACTIVE)
   {
      return false;
   }
   return true;
}

std::string Canevas::toString()
{
   ostringstream os;
   for (int i = 0; i < couches.taille(); i++)
   {
      os << couches[i].toString();
   }
   return os.str();
}