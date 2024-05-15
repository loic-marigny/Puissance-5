#ifndef PLATEAU_H_INCLUDED
#define PLATEAU_H_INCLUDED
#include "Case.h"
#include <vector>

using namespace std;

class Plateau{
private :
    int largeur;
    int hauteur;
    std::vector<std::vector<Case*>> matPlateau;
public :
    Plateau(int l, int h){
        largeur =l;
        hauteur=h;
        matPlateau.resize(hauteur);
        for(int i = 0; i < hauteur; ++i)
        {
            matPlateau[i].resize(largeur);}
        }
    ~Plateau();
    void setCouleur(string c);
    void remplirCase();
    void placerJeton(int posX, int posY, string couleur);
    bool estPlein();
};

#endif // PLATEAU_H_INCLUDED
