#include <iostream>
#include "JoueurHumain.h"

using namespace std;

JoueurHumain::JoueurHumain(string n, string c):Joueur(n, c) {}

int JoueurHumain::Joue()
{
    cout<<"A quel rang voulez vous placer votre jeton ?"<<endl;
    cin>>rang;
    return rang;
}

void JoueurHumain::DefinirNom()
{
    cout<<"Quel est le nom du joueur?"<<endl;
    cin>>name;
    nom=name;
}

void JoueurHumain::DefinirCouleur()
{
    cout<<"Quelle couleur voulez-vous jouer ?"<<endl;
    cin<<color;
    couleur=color;
}
