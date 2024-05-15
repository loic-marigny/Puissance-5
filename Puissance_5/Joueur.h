#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED

using namespace std;

class Joueur{
protected:
    string nom;
    string couleur;
public:
    Joueur(string nom, string couleur);
    ~Joueur();
    string getNom() const { return nom; }
    string getCouleur() const { return couleur; }
};

#endif // JOUEUR_H_INCLUDED
