#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED

#include <string>

class Joueur {
protected:
    std::string nom;
    std::string couleur;

public:
    Joueur(std::string n, std::string c);
    virtual ~Joueur();

    std::string getNom() const;
    std::string getCouleur() const;
    virtual int Joue() = 0;
};

#endif // JOUEUR_H_INCLUDED
