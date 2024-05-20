#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED

using namespace std;

class Joueur{
protected:
    string nom;
    string couleur;
public:
    Joueur() : nom(""), couleur(""){}
    Joueur(const string& n, const string& c);
    ~Joueur();
    virtual int Joue()=0;
    string getNom() const { return nom; }
    string getCouleur() const { return couleur; }
};

#endif // JOUEUR_H_INCLUDED
