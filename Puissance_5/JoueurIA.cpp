#include <iostream>
#include <cstdlib>
#include "JoueurIA.h"

using namespace std;

JoueurIA::JoueurIA(string n, string c) : Joueur(n, c) {}

int JoueurIA::Joue(){
    int colonne = rand() % 7; // Assumes a board width of 7
    cout << "L'IA place son jeton dans la colonne " << colonne << endl;
    return colonne;
}
