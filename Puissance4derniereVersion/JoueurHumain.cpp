#include <iostream>
#include "JoueurHumain.h"

using namespace std;

JoueurHumain::JoueurHumain(string n, string c):Joueur(n, c) {}
JoueurHumain::~JoueurHumain() {}

int JoueurHumain::Joue()
{
    int rang;
    cout<<"A quel rang voulez-vous placer votre jeton ?"<<endl;
    cin>>rang;
    return rang;
}

void JoueurHumain::DefinirNom()
{
    string name;
    cout<<"Quel est le nom du joueur?"<<endl;
    cin>>name;
    nom = name;
}

void JoueurHumain::DefinirCouleur()
{
    string color;
    cout<<"Quelle couleur voulez-vous jouer ?"<<endl;
    cin>>color;
    couleur=color;
}
