#include "JoueurIA.h"
#include <iostream>
#include <cstdlib>

using namespace std;

JoueurIA::JoueurIA(std::string n, std::string c) : Joueur(n, c) {}

JoueurIA::~JoueurIA() {}

int JoueurIA::Joue() {
    int colonne = rand() % 7;
    cout << "L'IA place son jeton dans la colonne " << colonne << endl;
    return colonne;
}
