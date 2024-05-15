#include <iostream>
#include "JoueurHumain.h"

using namespace std;

JoueurHumain::JoueurHumain(string n, string c) : Joueur(n, c) {}

int JoueurHumain::Joue(){
    int colonne;
    cout << "A quel rang voulez-vous placer votre jeton ? ";
    cin >> colonne;
    return colonne;
}
