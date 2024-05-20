#ifndef PLATEAU_H_INCLUDED
#define PLATEAU_H_INCLUDED
#include "Case.h"
#include <vector>

using namespace std;

class Plateau{
protected :
    int largeur;
    int hauteur;
    std::vector<std::vector<Case*>> matPlateau;
public :
    Plateau(){};
    Plateau(int l, int h){
        largeur=l;
        hauteur=h;
        matPlateau.resize(hauteur);
        for(int i = 0; i < hauteur; ++i)
        {
            matPlateau[i].resize(largeur);}
        }
    ~Plateau();
    int placerJeton(int posX, string couleur);
    bool estPlein() const;
    void afficher() const;
    int getLargeur() const { return largeur; }
    int getHauteur() const { return hauteur; }
    bool checkDirection(int x, int y, int dx, int dy, const std::string& couleur) const;
    bool gagnant(const string& couleur) const;
};

#endif // PLATEAU_H_INCLUDED
