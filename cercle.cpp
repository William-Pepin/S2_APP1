/********
 * Fichier: cercle.cpp
 * Auteurs: houa2209-pepw3101
 * Date: 17 janvier 2022 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    cercle.h. Ce fichier fait partie de la distribution de Graphicus.
********/
#include "cercle.h"
#define PI 3.14159265359

Cercle::Cercle(int x, int y, int r)
    : Forme(x, y)
{
    setRayon(r);
}

Cercle::~Cercle()
{
}

void Cercle::setRayon(int r)
{
    if (r > 0)
        rayon = r;
}

int Cercle::getRayon()
{
    return rayon;
}

double Cercle::aire()
{
    return rayon * rayon * PI;
}

void Cercle::afficher(ostream &s)
{
    s << "Cercle(x=" << ancrage.x << " ,y=" << ancrage.y << ", rayon=" << rayon << ", aire=" << aire() << ")" << endl;
};