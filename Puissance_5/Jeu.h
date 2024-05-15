#ifndef JEU_H_INCLUDED
#define JEU_H_INCLUDED

#include "Plateau.h"
#include "Joueur.h"
#include <iostream> // Ajout de l'inclusion

class Jeu {
private:
    Plateau plateau;
    Joueur* joueur1;
    Joueur* joueur2;
    Joueur* joueurCourant;
public:
    Jeu(int largeur, int hauteur, Joueur* j1, Joueur* j2);
    ~Jeu();
    void lancer();
    bool verifierGagnant(Joueur* joueur, int ligne, int colonne) const;
};

#endif // JEU_H_INCLUDED
