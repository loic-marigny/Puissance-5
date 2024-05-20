#ifndef JOUEURHUMAIN_H_INCLUDED
#define JOUEURHUMAIN_H_INCLUDED
#include "Joueur.h"

using namespace std;

class JoueurHumain : public Joueur{
public :
    JoueurHumain(string n, string c);
    ~JoueurHumain();
    int Joue() override;
    void DefinirNom();
    void DefinirCouleur();
};

#endif // JOUEURHUMAIN_H_INCLUDED
