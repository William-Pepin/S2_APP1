#include "forme.h"

#ifndef CARRE_H
#define CARRE_H
class Carre : public Forme
{
private:
    int cote;

public:
    Carre(int x = 0, int y = 0, int c = 1);
    ~Carre();
    void setCote(int c);
    int getCote();
    virtual double aire();
    virtual void afficher(ostream &s);
    virtual std::string toString();
};
#endif