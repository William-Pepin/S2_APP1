#include "forme.h"

#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle : public Forme
{
private:
    int largeur;
    int hauteur;

public:
    Rectangle(int x = 0, int y = 0, int l = 1, int h = 1);
    ~Rectangle();
    void setLargeur(int l);
    void setHauteur(int h);
    int getLargeur();
    int getHauteur();
    virtual double aire();
    virtual void afficher(ostream &s);
    virtual std::string toString();
};
#endif
