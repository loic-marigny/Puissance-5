#include "JoueurHumain.h"
#include <iostream>

using namespace std;

JoueurHumain::JoueurHumain(std::string n, std::string c) : Joueur(n, c) {}

JoueurHumain::~JoueurHumain() {}

int JoueurHumain::Joue() {
    int colonne;
    cout << "A quelle colonne voulez-vous placer votre jeton ? ";
    cin >> colonne;
    return colonne;
}

void JoueurHumain::DefinirNom() {
    cout << "Quel est le nom du joueur ? ";
    cin >> nom;
}

void JoueurHumain::DefinirCouleur() {
    cout << "Quelle couleur voulez-vous jouer ? ";
    cin >> couleur;
}
