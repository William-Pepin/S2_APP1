/********
 * Fichier: rectangle.cpp
 * Auteurs: houa2209-pepw3101
 * Date: 17 janvier 2022 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    rectangle.h. Ce fichier fait partie de la distribution de Graphicus.
 ********/
#include "rectangle.h"
#include <string>

using namespace std;

Rectangle::Rectangle(int x, int y, int l, int h)
    : Forme(x, y)
{
    largeur = l;
    hauteur = h;
}

Rectangle::~Rectangle()
{
}

void Rectangle::setLargeur(int l)
{
    if (l > 0)
        largeur = l;
}
void Rectangle::setHauteur(int h)
{
    if (h > 0)
        hauteur = h;
}
int Rectangle::getLargeur()
{
    return largeur;
}
int Rectangle::getHauteur()
{
    return hauteur;
}

double Rectangle::aire()
{
    return largeur * hauteur;
}

void Rectangle::afficher(ostream &s)
{
    s << "Rectangle(x=" << ancrage.x << " ,y=" << ancrage.y << ", largeur=" << largeur << ", hauteur=" << hauteur << ", aire=" << aire() << ")" << endl;
};

std::string Rectangle::toString()
{
    return "R " + to_string(ancrage.x) + " " + to_string(ancrage.y) + " " + to_string(largeur) + " " + to_string(hauteur);
}

std::ostream &operator<<(std::ostream &output, Rectangle &r)
{
    output << r.toString() << std::endl;
    return output;
}