/********
 * Fichier: canevas.cpp
 * Auteurs: houa2209-pepw3101
 * Date: 17 janvier 2022
 * Description: Implementation des methodes des classes decrites dans
 *    canevas.h. Ce fichier fait partie de la distribution de Graphicus.
 ********/

#include "canevas.h"

Canevas::Canevas()
{
   couches = new Couche[MAX_COUCHES];
   activerCouche(coucheActive);
}

Canevas::~Canevas()
{
   delete[] couches;
}

bool Canevas::reinitialiser()
{
   delete[] couches;
   couches = new Couche[MAX_COUCHES];
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
         couches[coucheActive].setEtat(2); // Désactive la couche
         couches[index].setEtat(1);        // On active la nouvelle couche
         coucheActive = index;             // On Keep track de la couche active
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
      couches[index].setEtat(3);
      return true;
   }
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

   for (int i = 0; i < MAX_COUCHES; i++)
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
   for (int i = 0; i < MAX_COUCHES; i++)
   {
      s << "----- Couche " << i << endl;
      couches[i].afficher(s);
   }
}

bool Canevas::estValide(int index)
{
   if (index < 0 || index >= MAX_COUCHES)
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