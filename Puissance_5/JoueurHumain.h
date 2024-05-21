#ifndef JOUEURHUMAIN_H_INCLUDED
#define JOUEURHUMAIN_H_INCLUDED

#include "Joueur.h"

class JoueurHumain : public Joueur {
public:
    JoueurHumain(std::string n, std::string c);
    ~JoueurHumain();

    int Joue() override;
    void DefinirNom();
    void DefinirCouleur();
};

#endif // JOUEURHUMAIN_H_INCLUDED
