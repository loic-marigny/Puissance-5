#include <iostream>
#include <vector>
#include "Case.h"
#include "Plateau.h"

using namespace std;

Plateau::~Plateau() {}

int Plateau::placerJeton(int posY, string couleur){
    for (int i = hauteur - 1; i >= 0; --i) {
        if (!matPlateau[i][posY].getContientJeton()) {
            matPlateau[i][posY].setCouleur(couleur);
            matPlateau[i][posY].remplirCase();
            return i; // Retourner la ligne où le jeton est placé
        }
    }
    return -1; // Retourner -1 si la colonne est pleine (cela ne devrait pas arriver avec une saisie utilisateur correcte)
}

bool Plateau::estPlein() const {
    for(int i = 0; i < hauteur; ++i){
        for(int j = 0; j < largeur; ++j){
            if(!matPlateau[i][j].getContientJeton()){
                return false;
            }
        }
    }
    return true;
}

void Plateau::afficher() const {
    for(int i = 0; i < hauteur; ++i){
        for(int j = 0; j < largeur; ++j){
            cout << (matPlateau[i][j].getContientJeton() ? matPlateau[i][j].getCouleur() : ".") << " ";
        }
        cout << endl;
    }
    cout << endl;
}
