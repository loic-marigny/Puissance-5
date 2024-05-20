#ifndef JOUEURIA_H_INCLUDED
#define JOUEURIA_H_INCLUDED

#include "Joueur.h"

class JoueurIA : public Joueur{
public:
    JoueurIA(string n, string c);
    int Joue() override;
};

#endif // JOUEURIA_H_INCLUDED
