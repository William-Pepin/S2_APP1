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
    virtual double aire() override;
    virtual void afficher(ostream &s) override;
    virtual std::string toString() override;
};
#endif