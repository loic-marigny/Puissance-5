#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED

using namespace std;

class Joueur{
protected:
    string nom;
    string couleur;
private:
    Joueur(string nom, string couleur);
    ~Joueur();
};

#endif // JOUEUR_H_INCLUDED
