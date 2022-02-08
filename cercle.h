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
    virtual double aire() override;
    virtual void afficher(ostream &s) override;
    virtual std::string toString() override;
};
#endif
