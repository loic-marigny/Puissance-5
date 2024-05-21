#ifndef PLATEAU_H_INCLUDED
#define PLATEAU_H_INCLUDED

#include "Case.h"
#include <vector>

class Plateau {
protected:
    int largeur;
    int hauteur;
    std::vector<std::vector<Case*>> matPlateau;

public:
    Plateau(int l, int h);
    ~Plateau();

    int placerJeton(int posX, std::string couleur);
    bool estPlein() const;
    void afficher() const;
    bool gagnant(const std::string& couleur) const;

    int getLargeur() const { return largeur; }
    int getHauteur() const { return hauteur; }

private:
    void initialiserPlateau();
    bool checkDirection(int x, int y, int dx, int dy, const std::string& couleur) const;
};

#endif // PLATEAU_H_INCLUDED
