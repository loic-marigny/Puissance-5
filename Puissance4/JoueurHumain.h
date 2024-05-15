#ifndef JOUEURHUMAIN_H_INCLUDED
#define JOUEURHUMAIN_H_INCLUDED

using namespace std;

class JoueurHumain : public Joueur{
public :
    JoueurHumain(string nom, string couleur);
    int Joue();
    void DefinirNom();
    void DefinirCouleur();
};

#endif // JOUEURHUMAIN_H_INCLUDED
