#ifndef PLATEAU_H_INCLUDED
#define PLATEAU_H_INCLUDED
#include "Case.h"
#include <vector>

using namespace std;

class Plateau{
private :
    int largeur;
    int hauteur;
    std::vector<std::vector<Case>> matPlateau;
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
    int placerJeton(int posY, string couleur);  // Modifier le retour à int
    bool estPlein() const;
    void afficher() const;
    int getLargeur() const { return largeur; }
    int getHauteur() const { return hauteur; }
    const vector<vector<Case>>& getMatPlateau() const { return matPlateau; }
};

#endif // PLATEAU_H_INCLUDED
