#include "forme.h"

#ifndef CERCLE_H
#define CERCLE_H
class Cercle : public Forme
{
private:
    int rayon;

public:
    Cercle(int x = 0, int y = 0, int r = 1);
    ~Cercle();
    void setRayon(int r);
    int getRayon();
    virtual double aire();
    virtual void afficher(ostream &s);
    virtual std::string toString();
};
#endif
