#include <iostream>
#include <vector>
#include "Case.h"
#include "Plateau.h"

using namespace std;

Plateau::~Plateau() {}

int Plateau::placerJeton(int posX, string couleur){
    for(int i = hauteur-1; i>=0; --i)
    {
        if(matPlateau[i][posX]->getContientJeton() == false){
            matPlateau[i][posX]->setCouleur(couleur);
            matPlateau[i][posX]->remplirCase();
            return i;
        }
    }
    return -1;
}

bool Plateau::estPlein() const {
    for(int i = 0; i < hauteur; ++i){
        for(int j = 0; j < largeur; ++j){
            if(matPlateau[i][j]->getContientJeton() == false){
                return false;
            }
        }
    }
    return true;
}

void Plateau::afficher() const {
    for(int i = 0; i < hauteur; ++i){
        for(int j = 0; j < largeur; ++j){
            cout << (matPlateau[i][j]->getContientJeton() ? matPlateau[i][j]->getCouleur() : ".") << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool Plateau::checkDirection(int x, int y, int dx, int dy, const std::string& couleur) const {
    int count = 0;
    int largeur = matPlateau.size();
    int hauteur = matPlateau[0].size();

    for (int step = 0; step < 5; ++step) {
        int nx = x + step * dx;
        int ny = y + step * dy;
        if (nx >= 0 && nx < largeur && ny >= 0 && ny < hauteur && matPlateau[nx][ny]->getCouleur() == couleur) {
            count++;
        } else {
            break;
        }
    }
    return count == 5;
}

bool Plateau::gagnant(const string& couleur) const {
    int largeur = matPlateau.size();
    int hauteur = matPlateau[0].size();

    for (int i = 0; i < largeur; ++i) {
        for (int j = 0; j < hauteur; ++j) {
            if (matPlateau[i][j]->getCouleur() == couleur) {
                if (checkDirection(i, j, 1, 0, couleur) ||
                    checkDirection(i, j, 0, 1, couleur) ||
                    checkDirection(i, j, 1, 1, couleur) ||
                    checkDirection(i, j, 1, -1, couleur))
                {
                    return true;
                }
            }
        }
    }
    return false;
}
