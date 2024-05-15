#ifndef JOUEURHUMAIN_H_INCLUDED
#define JOUEURHUMAIN_H_INCLUDED

#include "Joueur.h"

class JoueurHumain : public Joueur{
public:
    JoueurHumain(string n, string c);
    int Joue() override;
};

#endif // JOUEURHUMAIN_H_INCLUDED
