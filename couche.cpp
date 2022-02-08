/********
 * Fichier: couche.cpp
 * Auteurs: houa2209-pepw3101
 * Date: 17 janvier 2022 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    couche.h. Ce fichier fait partie de la distribution de Graphicus.
 ********/

#include "couche.h"
#include "vecteur.h"
#include <sstream>

using namespace std;

Couche::Couche()
{
    vecteur = new Vecteur<Forme *>();
}

Couche::~Couche()
{
    delete vecteur;
}

bool Couche::reinitialiser()
{
    delete vecteur;
    vecteur = new Vecteur<Forme *>();
    etat = 0;
    return true;
}

bool Couche::ajouter(Forme *forme)
{
    if (etat == 1)
    {
        return vecteur->ajouter(forme);
    }
    return false;
}

Forme *Couche::retirer(int index)
{
    if (etat == 1)
    {
        return vecteur->retirer(index);
    }
    return nullptr;
}

Forme *Couche::obtenir(int index)
{
    return vecteur->obtenir(index);
}

double Couche::aireTotale()
{
    double aireTotale = 0;
    int taille = vecteur->taille();

    for (int i = 0; i < taille; i++)
    {
        Forme *current = vecteur->obtenir(i);

        aireTotale += current->aire();
    }

    return aireTotale;
}

bool Couche::translater(int deltaX, int deltaY)
{
    if (etat == 1)
    {
        for (int i = 0; i < vecteur->taille(); i++)
        {
            Forme *current = vecteur->obtenir(i);

            current->translater(deltaX, deltaY);
        }
        return true;
    }
    return false;
}

int Couche::getEtat()
{
    return etat;
}

bool Couche::setEtat(int etat)
{
    if (etat >= 1 && etat <= 3)
    {
        this->etat = etat;
        return true;
    }
    return false;
}

void Couche::afficher(ostream &s)
{
    if (etat == 3)
    {
        s << "Couche cachee" << endl;
    }
    else if (etat == 0)
    {
        s << "Couche initialisee" << endl;
    }
    else if (vecteur->estVide())
    {
        s << "Couche vide" << endl;
    }
    else
    {
        for (int i = 0; i < vecteur->taille(); i++)
        {
            Forme *current = vecteur->obtenir(i);
            current->afficher(s);
        }
    }
}

std::string Couche::toString()
{
    ostringstream os;
    for (size_t i = 0; i < vecteur->taille(); i++)
    {
        os << vecteur[i].toString();
    }
    return os.str();
}