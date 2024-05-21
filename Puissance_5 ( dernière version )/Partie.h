#ifndef PARTIE_H_INCLUDED
#define PARTIE_H_INCLUDED

#include "Plateau.h"
#include "JoueurHumain.h"
#include "JoueurIA.h"

class Partie {
protected:
    bool finPartie;
    int refPartie;
    Joueur* j1;
    Joueur* j2;
    Plateau plateau;

public:
    Partie(int rp);
    ~Partie();

    void jouePartie();
    void jouerUnTour(Joueur* j);
};

#endif // PARTIE_H_INCLUDED
