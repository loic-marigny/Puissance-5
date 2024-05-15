#include <iostream>
#include <vector>
#include "Case.h"
#include "Plateau.h"

using namespace std;

Plateau::~Plateau() {}

void Plateau::placerJeton(int posX, int posY, string couleur){
    matPlateau[posX][posY]->setCouleur(couleur);
    matPlateau[posX][posY]->remplirCase();
}

bool Plateau::estPlein(){
    for(int i = 0; i<hauteur; ++i)
    {
        for(int j = 0; j < largeur; ++j)
        {
            if(!(matPlateau[i][j]->getContientJeton()))
            {
                return false;
            }
        }
    }
    return true;
}
