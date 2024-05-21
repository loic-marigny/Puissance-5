#include "Joueur.h"

Joueur::Joueur(std::string n, std::string c) : nom(n), couleur(c) {}

Joueur::~Joueur() {}

std::string Joueur::getNom() const {
    return nom;
}

std::string Joueur::getCouleur() const {
    return couleur;
}
