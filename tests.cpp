/********
 * Fichier: tests.cpp
 * Auteurs: houa2209-pepw3101
 * Date: 17 janvier 2022 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h. Ce fichier fait partie de la distribution de Graphicus.
 ********/

#include "tests.h"
#include "cercle.h"
#include "carre.h"
#include "rectangle.h"
#include "vecteur.h"
#include "couche.h"
#include "canevas.h"

using namespace std;

void cercle_instancier();
void cercle_detruire();
void cercle_aire();
void cercle_afficher();
void cercle_setRayon();
void cercle_getRayon();

void carre_instancier();
void carre_detruire();
void carre_aire();
void carre_afficher();
void carre_setCote();
void carre_getCote();

void rectangle_instancier();
void rectangle_detruire();
void rectangle_aire();
void rectangle_afficher();
void rectangle_getLargeur();
void rectangle_getHauteur();
void rectangle_setLargeur();
void rectangle_setHauteur();

void vecteur_instancier();
void vecteur_detruire();
void vecteur_capacite();
void vecteur_taille();
void vecteur_ajouter();
void vecteur_retirer();
void vecteur_obtenir();
void vecteur_vider();
void vecteur_estVide();
void vecteur_afficher();

void couche_instancier();
void couche_detruire();
void couche_reinitialiser();
void couche_ajouter();
void couche_retirer();
void couche_obtenir();
void couche_aireTotale();
void couche_translater();
void couche_etat();
void couche_afficher();

void canevas_instancier();
void canevas_detruire();
void canevas_reinitialiser();
void canevas_activerCouche();
void canevas_cacherCouche();
void canevas_ajouterForme();
void canevas_retirerForme();
void canevas_aire();
void canevas_translater();
void canevas_afficher();
void canevas_estValide();
void canevas_contientActive();

void Tests::tests_unitaires_formes()
{
   cercle_instancier();
   cercle_detruire();
   cercle_getRayon();
   cercle_setRayon();
   cercle_aire();
   cercle_afficher();

   carre_instancier();
   carre_detruire();
   carre_getCote();
   carre_setCote();
   carre_aire();
   carre_afficher();

   rectangle_instancier();
   rectangle_detruire();
   rectangle_aire();
   rectangle_afficher();
   rectangle_getLargeur();
   rectangle_getHauteur();
   rectangle_setLargeur();
   rectangle_setHauteur();
}

void cercle_instancier()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Cercle cercle = Cercle();

   cercle.afficher(cout);

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void cercle_detruire()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Cercle cercle = Cercle();
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void cercle_getRayon()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Cercle cercle = Cercle();

   cout << "Devrait être 1, est : " << cercle.getRayon() << endl;

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void cercle_setRayon()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Cercle cercle = Cercle();

   cercle.setRayon(-1);

   cout << "Devrait être 1, est : " << cercle.getRayon() << endl;

   cercle.setRayon(0);

   cout << "Devrait être 1, est : " << cercle.getRayon() << endl;

   cercle.setRayon(1000);

   cout << "Devrait être 1000, est : " << cercle.getRayon() << endl;

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void cercle_aire()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;

   Cercle cercle = Cercle();

   cercle.setRayon(2);

   cout << "Devrait être 12.5664, est : " << cercle.aire() << endl;

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void cercle_afficher()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Cercle cercle = Cercle();
   cercle.afficher(cout);
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void rectangle_instancier()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Rectangle rectangle = Rectangle();

   rectangle.afficher(cout);

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void rectangle_detruire()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Rectangle rectangle = Rectangle();
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void rectangle_getLargeur()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Rectangle rectangle = Rectangle();

   cout << "Devrait être 1, est : " << rectangle.getLargeur() << endl;

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void rectangle_getHauteur()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Rectangle rectangle = Rectangle();

   cout << "Devrait être 1, est : " << rectangle.getHauteur() << endl;

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void rectangle_setLargeur()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Rectangle rectangle = Rectangle();

   rectangle.setLargeur(-1);

   cout << "Devrait être 1, est : " << rectangle.getLargeur() << endl;

   rectangle.setLargeur(0);

   cout << "Devrait être 1, est : " << rectangle.getLargeur() << endl;

   rectangle.setLargeur(1000);

   cout << "Devrait être 1000, est : " << rectangle.getLargeur() << endl;

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void rectangle_setHauteur()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Rectangle rectangle = Rectangle();

   rectangle.setHauteur(-1);

   cout << "Devrait être 1, est : " << rectangle.getHauteur() << endl;

   rectangle.setHauteur(0);

   cout << "Devrait être 1, est : " << rectangle.getHauteur() << endl;

   rectangle.setHauteur(1000);

   cout << "Devrait être 1000, est : " << rectangle.getHauteur() << endl;

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void rectangle_aire()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;

   Rectangle rectangle = Rectangle();

   rectangle.setLargeur(2);
   rectangle.setHauteur(4);

   cout << "Devrait être 8, est : " << rectangle.aire() << endl;

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void rectangle_afficher()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Rectangle rectangle = Rectangle();
   rectangle.afficher(cout);
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void carre_instancier()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Carre carre = Carre();

   carre.afficher(cout);

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void carre_detruire()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Carre carre = Carre();
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void carre_getCote()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Carre carre = Carre();

   cout << "Devrait être 1, est : " << carre.getCote() << endl;

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void carre_setCote()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Carre carre = Carre();

   carre.setCote(-1);

   cout << "Devrait être 1, est : " << carre.getCote() << endl;

   carre.setCote(0);

   cout << "Devrait être 1, est : " << carre.getCote() << endl;

   carre.setCote(1000);

   cout << "Devrait être 1000, est : " << carre.getCote() << endl;

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void carre_aire()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;

   Carre carre = Carre();

   carre.setCote(2);

   cout << "Devrait être 4, est : " << carre.aire() << endl;

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void carre_afficher()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Carre carre = Carre();
   carre.afficher(cout);
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void vecteur_instancier()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Vecteur<Forme *> vecteur = Vecteur<Forme *>();

   cout << "Capacité devrait être 10, est : " << vecteur.capacite() << endl;
   cout << "Taille devrait être 0, est : " << vecteur.taille() << endl;
   cout << "EstVide devrait être 1, est : " << vecteur.estVide() << endl;
   cout << "Afficher devrait être vide, est : ";
   // vecteur.afficher(cout); old
   cout << endl;

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void vecteur_detruire()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   //
   Vecteur<Forme *> *vecteur = new Vecteur<Forme *>();
   Rectangle *rectangle = new Rectangle();

   vecteur->ajouter(rectangle);

   delete vecteur;

   cout << "Devrait être 0, est : " << rectangle << endl;

   //
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void vecteur_capacite()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Vecteur<Forme *> vecteur = Vecteur<Forme *>();
   cout << "Devrait être 10, est : " << vecteur.capacite() << endl;
   for (int i = 0; i < 11; i++)
   {
      vecteur.ajouter(nullptr);
   }
   cout << "Devrait être 20, est : " << vecteur.capacite() << endl;
   for (int i = 0; i < 11; i++)
   {
      vecteur.ajouter(nullptr);
   }
   cout << "Devrait être 40, est : " << vecteur.capacite() << endl;
   for (int i = 0; i < 40; i++)
   {
      vecteur.ajouter(nullptr);
   }
   cout << "Devrait être 80, est : " << vecteur.capacite() << endl;

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void vecteur_taille()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Vecteur<Forme *> vecteur = Vecteur<Forme *>();
   Rectangle rectangle = Rectangle();
   cout << "Devrait être 0, est : " << vecteur.taille() << endl;
   vecteur.ajouter(&rectangle);
   cout << "Devrait être 1, est : " << vecteur.taille() << endl;
   vecteur.retirer(0);
   vecteur.retirer(0);
   cout << "Devrait être 0, est : " << vecteur.taille() << endl;
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void vecteur_ajouter()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Vecteur<Forme *> vecteur = Vecteur<Forme *>();
   Cercle *cercle = new Cercle();
   Rectangle *rectangle = new Rectangle();
   vecteur.ajouter(cercle);
   vecteur.ajouter(rectangle);
   cout << "Devrait être 2, est : " << vecteur.taille() << endl;

   cout << "Devrait être un cercle, est : ";
   vecteur.obtenir(0)->afficher(cout);
   cout << "Devrait être un rectangle, est : ";
   vecteur.obtenir(1)->afficher(cout);
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void vecteur_retirer()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Vecteur<Forme *> vecteur = Vecteur<Forme *>();
   Cercle *cercle = new Cercle();
   Rectangle *rectangle1 = new Rectangle();
   Carre *carre1 = new Carre();
   Rectangle *rectangle2 = new Rectangle(0, 0, 2, 2);
   Carre *carre2 = new Carre(0, 0, 2);

   vecteur.ajouter(cercle);
   vecteur.retirer(0);
   cout << "Devrait être 0, est : " << vecteur.taille() << endl;

   cout << "Devrait être 0, est : " << vecteur.retirer(0) << endl;

   cout << "Devrait être 0, est : " << vecteur.retirer(23) << endl;

   vecteur.ajouter(cercle);
   vecteur.ajouter(rectangle1);
   vecteur.ajouter(rectangle2);
   vecteur.ajouter(carre1);
   vecteur.ajouter(carre2);

   // C R1 R2 C1 C2

   vecteur.retirer(1);

   cout << "Devrait être cercle est : ";
   vecteur.obtenir(0)->afficher(cout);

   cout << "Devrait être rectangle2 est : ";
   vecteur.obtenir(1)->afficher(cout);

   cout << "Devrait être carre1 est : ";
   vecteur.obtenir(2)->afficher(cout);

   cout << "Devrait être carre2 est : ";
   vecteur.obtenir(3)->afficher(cout);

   cout << "Devrait être 0, est : " << vecteur.obtenir(4) << endl;

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void vecteur_obtenir()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Vecteur<Forme *> vecteur = Vecteur<Forme *>();
   Rectangle *rect1 = new Rectangle();
   Cercle *cercle1 = new Cercle();
   Rectangle *rect2 = new Rectangle();
   Cercle *cercle2 = new Cercle(100, 100, 24);

   vecteur.ajouter(rect1);
   vecteur.ajouter(cercle1);
   vecteur.ajouter(rect2);
   vecteur.ajouter(cercle2);
   cout << "Devrait être cercle2 est : ";
   vecteur.obtenir(3)->afficher(cout);

   cout << "Devrait être 0, est : " << vecteur.obtenir(9) << endl;
   cout << "Devrait être 0, est : " << vecteur.obtenir(-1) << endl;

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void vecteur_vider()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   // attente de savoir comment les destructuer marche pour vrai
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void vecteur_estVide()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Vecteur<Forme *> vecteur = Vecteur<Forme *>();
   cout << "Devrait être 1, est : " << vecteur.estVide() << endl;
   Cercle *cercle = new Cercle();
   vecteur.ajouter(cercle);
   vecteur.vider();
   cout << "Devrait être 1, est : " << vecteur.estVide() << endl;
   vecteur.ajouter(cercle);
   cout << "Devrait être 0, est : " << vecteur.estVide() << endl;
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void vecteur_afficher()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Vecteur<Forme *> vecteur = Vecteur<Forme *>();
   cout << "Devrait ne rien afficher, est : ";
   // vecteur.afficher(cout); old
   cout << endl;

   Cercle cercle = Cercle();
   vecteur.ajouter(&cercle);
   cout << "Devrait afficher: Cercle x=0, y=0, r=1, aire=3,14159, est : " << endl;
   // vecteur.afficher(cout); old

   vecteur.vider();
   Cercle cercle2 = Cercle(2, 8, 9);
   vecteur.ajouter(&cercle2);
   cout << "Devrait afficher: Cercle x=2, y=8, r=9, aire= 254,469 est : " << endl;
   // vecteur.afficher(cout); old
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void couche_instancier()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Couche couche = Couche();

   cout << "AireTotale devrait être 0, est : " << couche.aireTotale() << endl;
   cout << "Etat devrait être 0, est : " << couche.getEtat() << endl;

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void couche_detruire()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Couche *couche = new Couche();
   delete couche;
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void couche_reinitialiser()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Couche couche = Couche();
   Carre carre1 = Carre();
   Carre carre2 = Carre();
   Carre carre3 = Carre();
   couche.ajouter(&carre1);
   couche.ajouter(&carre2);
   couche.ajouter(&carre3);
   couche.reinitialiser();

   cout << "AireTotale devrait être 0, est : " << couche.aireTotale() << endl;
   cout << "Etat devrait être 0, est : " << couche.getEtat() << endl;

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void couche_ajouter()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Couche couche = Couche();
   Carre carre1 = Carre();
   Carre carre2 = Carre();
   Rectangle rectangle = Rectangle();
   couche.ajouter(&carre1);
   cout << "Devrait rien avoir" << endl;
   couche.afficher(cout);
   couche.setEtat(2);
   couche.ajouter(&carre2);
   cout << "Devrait rien avoir" << endl;
   couche.afficher(cout);
   cout << "Devrait rien avoir" << endl;
   couche.afficher(cout);
   couche.setEtat(3);
   couche.ajouter(&rectangle);
   couche.setEtat(1);
   couche.ajouter(&carre1);
   couche.ajouter(&carre2);
   couche.ajouter(&rectangle);
   cout << "Devrait avoir Carre(x=0 ,y=0, c=1, aire=1), Carre(x=0 ,y=0, c=1, aire=1), Rectangle(x=0 ,y=0, l=1, h=1, aire=1)" << endl;
   couche.afficher(cout);
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void couche_retirer()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Couche couche = Couche();
   Carre carre = Carre();
   Cercle cercle = Cercle();

   cout << "Devrait être 0, est : " << couche.retirer(0) << endl;
   couche.setEtat(1);
   couche.ajouter(&carre);
   couche.ajouter(&cercle);
   couche.retirer(0);
   cout << "Devrait être Cercle(x=0 ,y=0, r=1, aire=3,14192  est:)" << endl;
   couche.afficher(cout);
   cout << "Devrait être 0, est : " << couche.retirer(6) << endl;
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void couche_obtenir()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Couche couche = Couche();
   Carre carre = Carre();
   Rectangle rectangle = Rectangle();
   Cercle cercle = Cercle();

   couche.setEtat(1);

   couche.ajouter(&carre);
   couche.ajouter(&rectangle);
   couche.ajouter(&cercle);

   cout << "Devrait être carré, est : ";
   couche.obtenir(0)->afficher(cout);

   cout << "Devrait être rectangle, est : ";
   couche.obtenir(1)->afficher(cout);

   cout << "Devrait être cercle, est : ";
   couche.obtenir(2)->afficher(cout);

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void couche_aireTotale()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Couche couche = Couche();
   Rectangle rectangle = Rectangle(0, 0, 10, 50);
   Carre carre = Carre(0, 0, 25);
   couche.setEtat(1);
   couche.ajouter(&rectangle);
   couche.ajouter(&carre);
   cout << "Etat devrait être 1125, est : " << couche.aireTotale() << endl;
   couche.retirer(1);
   cout << "Etat devrait être 500, est : " << couche.aireTotale() << endl;
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void couche_translater()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Couche couche = Couche();
   Carre carre = Carre();
   Rectangle rectangle = Rectangle();
   int deltaX = 1000;
   int deltaY = 1000;

   couche.setEtat(1);
   couche.ajouter(&carre);
   couche.ajouter(&rectangle);

   couche.translater(deltaX, deltaY);

   cout << "X, Y de Carré devrait être 1000, 1000 est : " << carre.getAncrage().x << ", " << carre.getAncrage().y << endl;
   cout << "X, Y de Rectangle devrait être 1000, 1000 est : " << rectangle.getAncrage().x << ", " << rectangle.getAncrage().y << endl;
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void couche_etat()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Couche couche = Couche();
   cout << "Etat devrait être 0, est : " << couche.getEtat() << endl;

   couche.setEtat(2);
   cout << "Etat devrait être 2, est : " << couche.getEtat() << endl;

   couche.setEtat(6);
   cout << "Etat devrait être 2, est : " << couche.getEtat() << endl;

   couche.setEtat(0);
   cout << "Etat devrait être 2, est : " << couche.getEtat() << endl;

   couche.setEtat(3);
   cout << "Etat devrait être 3, est : " << couche.getEtat() << endl;
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void couche_afficher()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Couche couche = Couche();

   cout << "Devrait être Couche initialisee, est : ";
   couche.afficher(cout);

   couche.setEtat(3);
   cout << "Devrait être Couche cachee, est : ";
   couche.afficher(cout);

   couche.setEtat(1);
   cout << "Devrait être Couche vide, est : ";
   couche.afficher(cout);

   Carre carre1 = Carre();
   couche.ajouter(&carre1);

   cout << "Devrait être Carre(x=0, y=0, c=1, aire=1)   est : ";
   couche.afficher(cout);
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void canevas_instancier()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Canevas canevas = Canevas();
   cout << "ContientActive devrait être 1, est : " << canevas.contientActive() << endl;
   canevas.afficher(cout);
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void canevas_detruire()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Canevas *canevas = new Canevas();

   delete canevas;
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void canevas_reinitialiser()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Canevas canevas = Canevas();
   Carre carre = Carre();
   canevas.ajouterForme(&carre);
   canevas.reinitialiser();
   cout << "Le canevas devrait être vide, est : " << endl;
   canevas.afficher(cout);
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void canevas_activerCouche()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Canevas canevas = Canevas();

   canevas.activerCouche(-3);
   cout << "La couche active devrait être 0" << endl;
   canevas.afficher(cout);

   canevas.activerCouche(3);
   cout << "Le couche active devrait être 3" << endl;
   canevas.afficher(cout);

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void canevas_cacherCouche()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Canevas canevas = Canevas();
   canevas.cacherCouche(0);
   canevas.cacherCouche(1);
   canevas.cacherCouche(2);
   canevas.cacherCouche(3);
   cout << "Cacher couche avec un index valide devrait être 1, est : " << canevas.cacherCouche(4) << endl;
   cout << "Cacher couche avec un index invalide devrait être 0, est : " << canevas.cacherCouche(5) << endl;
   cout << "Les 5 couches devraient être cachees " << endl;
   canevas.afficher(cout);

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void canevas_ajouterForme()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Canevas canevas = Canevas();
   Cercle cercle = Cercle();
   canevas.ajouterForme(&cercle);
   cout << "La couche 0 devrait contenir le cercle, est: " << endl;
   canevas.afficher(cout);
   canevas.activerCouche(1);
   canevas.ajouterForme(&cercle);
   cout << "La couche active devrait contenir le cercle, est: " << endl;
   canevas.afficher(cout);

   canevas.cacherCouche(1);
   canevas.cacherCouche(0);
   canevas.ajouterForme(&cercle);
   cout << "Aucune couche ne devrait contenir le cercle, est: " << endl;
   canevas.afficher(cout);

   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void canevas_retirerForme()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Canevas canevas = Canevas();
   Cercle cercle = Cercle();
   canevas.ajouterForme(&cercle);
   canevas.activerCouche(1);
   canevas.ajouterForme(&cercle);
   cout << "retirer forme devrait être 0, est : " << canevas.retirerForme(-1) << endl;
   cout << "retirer forme devrait être 0, est : " << canevas.retirerForme(7) << endl;
   canevas.retirerForme(0);
   cout << "Couche 0 devrait contenir un cercle: " << endl;
   canevas.afficher(cout);
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void canevas_aire()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Canevas canevas = Canevas();
   Rectangle rectangle = Rectangle(3, 9, 34, 2);
   cout << "L'aire devrait être de 0: " << canevas.aire() << endl;

   canevas.activerCouche(2);
   canevas.ajouterForme(&rectangle);
   canevas.activerCouche(3);
   canevas.ajouterForme(&rectangle);
   cout << "L'aire devrait être de 136: " << canevas.aire() << endl;

   canevas.retirerForme(0);
   cout << "L'aire devrait être de 68: " << canevas.aire() << endl;
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void canevas_translater()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Canevas canevas = Canevas();
   Carre carre = Carre();
   Rectangle rectangle = Rectangle();
   int deltaX = 1000;
   int deltaY = 1000;

   canevas.ajouterForme(&carre);
   canevas.ajouterForme(&rectangle);

   canevas.translater(deltaX, deltaY);

   cout << "X, Y de Carré devrait être 1000, 1000 est : " << carre.getAncrage().x << ", " << carre.getAncrage().y << endl;
   cout << "X, Y de Rectangle devrait être 1000, 1000 est : " << rectangle.getAncrage().x << ", " << rectangle.getAncrage().y << endl;

   canevas.cacherCouche(0);
   cout << "Devrait être 0, est: " << canevas.translater(deltaX, deltaY) << endl;
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void canevas_afficher()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Canevas canevas = Canevas();
   Carre carre = Carre();
   Rectangle rectangle = Rectangle();
   Cercle cercle = Cercle();

   canevas.ajouterForme(&carre);
   canevas.cacherCouche(1);
   canevas.activerCouche(2);
   canevas.ajouterForme(&rectangle);
   canevas.activerCouche(3);
   canevas.ajouterForme(&cercle);
   cout << "Couche 1 -> carre, 2-> cachee 3-> rectangle 4->cercle 5->intialisee : " << endl;
   canevas.afficher(cout);
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void canevas_estValide()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Canevas canevas = Canevas();
   cout << "estValide devrait être 1, est : " << canevas.estValide(0) << endl;
   cout << "estValide devrait être 1, est : " << canevas.estValide(4) << endl;
   cout << "estValide devrait être 0, est : " << canevas.estValide(-1) << endl;
   cout << "estValide devrait être 0, est : " << canevas.estValide(123) << endl;
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void canevas_contientActive()
{
   cout << "##### Test de la fonction " << __func__ << " #####" << endl;
   Canevas canevas = Canevas();
   cout << "ContientActive devrait être 1, est : " << canevas.contientActive() << endl;
   canevas.cacherCouche(0);
   cout << "ContientActive devrait être 0, est : " << canevas.contientActive() << endl;
   cout << "##### Fin de la fonction " << __func__ << " #####" << endl;
}

void Tests::tests_unitaires_vecteur()
{
   vecteur_instancier();
   vecteur_detruire();
   vecteur_capacite();
   vecteur_taille();
   vecteur_ajouter();
   vecteur_retirer();
   vecteur_obtenir();
   vecteur_vider();
   vecteur_estVide();
   vecteur_afficher();
}

void Tests::tests_unitaires_couche()
{
   couche_instancier();
   couche_detruire();
   couche_reinitialiser();
   couche_ajouter();
   couche_retirer();
   couche_obtenir();
   couche_aireTotale();
   couche_translater();
   couche_etat();
   couche_afficher();
}

void Tests::tests_unitaires_canevas()
{
   canevas_instancier();
   canevas_detruire();
   canevas_reinitialiser();
   canevas_activerCouche();
   canevas_cacherCouche();
   canevas_ajouterForme();
   canevas_retirerForme();
   canevas_aire();
   canevas_translater();
   canevas_afficher();
   canevas_estValide();
   canevas_contientActive();
}

void Tests::tests_unitaires()
{
   tests_unitaires_formes();
   tests_unitaires_vecteur();
   tests_unitaires_couche();
   tests_unitaires_canevas();
}

void Tests::tests_application()
{
   tests_application_cas_01();
   tests_application_cas_02();
}

void Tests::tests_application_cas_01()
{
   cout << "TESTS APPLICATION (CAS 01)" << endl;
   Canevas canevasr = Canevas();
   Canevas canevasc = Canevas();
   Canevas canevasce = Canevas();

   Rectangle rectangle1 = Rectangle(0, 0, 4, 7);
   Rectangle rectangle2 = Rectangle(0, 0, 4, 7);
   Rectangle rectangle3 = Rectangle(0, 0, 4, 7);
   Carre carre1 = Carre(0, 0, 6);
   Carre carre2 = Carre(0, 0, 6);
   Carre carre3 = Carre(0, 0, 6);
   Cercle cercle1 = Cercle(0, 0, 2);
   Cercle cercle2 = Cercle(0, 0, 2);
   Cercle cercle3 = Cercle(0, 0, 2);

   canevasr.activerCouche(2);
   canevasr.ajouterForme(&rectangle1);
   canevasr.ajouterForme(&rectangle2);
   canevasr.ajouterForme(&rectangle3);
   canevasr.translater(200, 400);
   canevasr.afficher(cout);

   canevasc.activerCouche(3);
   canevasc.ajouterForme(&carre1);
   canevasc.ajouterForme(&carre2);
   canevasc.ajouterForme(&carre2);
   canevasc.translater(100, 820);
   canevasc.afficher(cout);

   canevasce.activerCouche(1);
   canevasce.ajouterForme(&cercle1);
   canevasce.ajouterForme(&cercle2);
   canevasce.ajouterForme(&cercle3);
   canevasce.translater(100, 820);
   canevasce.afficher(cout);
}

void Tests::tests_application_cas_02()
{
   cout << "TESTS APPLICATION (CAS 02)" << endl;
   Canevas canevas = Canevas();
   Rectangle rectangle1 = Rectangle(500, 250, 2, 7);
   Rectangle rectangle2 = Rectangle(0, 0, 2, 100);
   Cercle cercle = Cercle(100, 1000, 10);
   Carre carre = Carre();

   canevas.cacherCouche(0);
   canevas.cacherCouche(1);
   canevas.cacherCouche(2);
   canevas.cacherCouche(3);
   canevas.cacherCouche(4);

   canevas.activerCouche(4);

   canevas.ajouterForme(&carre);
   canevas.translater(1920, 1080);

   canevas.activerCouche(0);
   canevas.ajouterForme(&rectangle1);
   canevas.ajouterForme(&rectangle2);
   canevas.ajouterForme(&carre);
   canevas.ajouterForme(&cercle);
   cout << "Aire : " << canevas.aire() << endl;
   canevas.retirerForme(2);
   cout << "Aire : " << canevas.aire() << endl;

   canevas.afficher(cout);
}

void Tests::validation()
{
   cout << "DÉBUT DE : étape 1 à 6" << endl;
   Canevas canevas = Canevas();

   canevas.activerCouche(1);

   Rectangle rectangleC1 = Rectangle(0, 0, 2, 3);
   Carre carreC1 = Carre(2, 3, 4);
   Cercle cercleC1 = Cercle(7, 8, 6);

   canevas.ajouterForme(&rectangleC1);
   canevas.ajouterForme(&carreC1);
   canevas.ajouterForme(&cercleC1);

   canevas.activerCouche(2);
   Rectangle rectangleC2 = Rectangle(0, 0, 4, 5);
   canevas.ajouterForme(&rectangleC2);

   canevas.afficher(cout);
   cout << "Aire : " << canevas.aire() << endl;

   cout << "FIN DE : étape 1 à 6" << endl;
   cout << "DÉBUT DE : étape 7 à 13" << endl;

   canevas.activerCouche(0);
   Rectangle rectangleC0 = Rectangle();
   Carre carreC0 = Carre();
   Cercle cercleC0 = Cercle();

   canevas.ajouterForme(&rectangleC0);
   canevas.ajouterForme(&carreC0);
   canevas.ajouterForme(&cercleC0);

   canevas.activerCouche(1);
   canevas.translater(5, 5);

   canevas.afficher(cout);
   cout << "Aire : " << canevas.aire() << endl;

   cout << "FIN DE : étape 7 à 13" << endl;
   cout << "DÉBUT DE : étape 14 à 16" << endl;

   canevas.retirerForme(0);

   canevas.afficher(cout);
   cout << "Aire : " << canevas.aire() << endl;

   cout << "FIN DE : étape 14 à 16" << endl;
   cout << "DÉBUT DE : étape 17 à 19" << endl;

   canevas.reinitialiser();
   canevas.afficher(cout);
   cout << "Aire : " << canevas.aire() << endl;

   cout << "FIN DE : étape 17 à 19" << endl;
}