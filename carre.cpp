/********
 * Fichier: carrre.cpp
 * Auteurs: houa2209-pepw3101
 * Date: 17 janvier 2022 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    carre.h. Ce fichier fait partie de la distribution de Graphicus.
 ********/
#include "carre.h"

Carre::Carre(int x, int y, int c)
    : Forme(x, y)
{
    cote = c;
}

Carre::~Carre()
{
}

void Carre::setCote(int c)
{
    if (c > 0)
        cote = c;
}

int Carre::getCote()
{
    return cote;
}

double Carre::aire()
{
    return cote * cote;
}

void Carre::afficher(ostream &s)
{
    s << "Carre(x=" << ancrage.x << " ,y=" << ancrage.y << ", côté=" << cote << ", aire=" << aire() << ")" << endl;
};

std::string Carre::toString()
{
    return "K " + to_string(ancrage.x) + " " + to_string(ancrage.y) + " " + to_string(cote);
}
std::ostream &operator<<(std::ostream &output, Carre &c)
{
    output << c.toString() << std::endl;
    return output;
}
