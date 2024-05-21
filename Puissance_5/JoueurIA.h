#ifndef JOUEURIA_H_INCLUDED
#define JOUEURIA_H_INCLUDED

#include "Joueur.h"

class JoueurIA : public Joueur {
public:
    JoueurIA(std::string n, std::string c);
    ~JoueurIA();

    int Joue() override;
};

#endif // JOUEURIA_H_INCLUDED
