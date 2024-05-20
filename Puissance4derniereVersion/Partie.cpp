#include <iostream>
#include "Partie.h"

using namespace std;


Partie::Partie(int rp) : finPartie {false}, refPartie {rp}  {
        cout << "Entrez le nom du Joueur 1 : ";
        string nomJoueur1;
        cin >> nomJoueur1;

        cout << "Entrez la couleur du Joueur 1 : ";
        string couleurJoueur1;
        cin >> couleurJoueur1;

        //Joueur* j1;
        JoueurHumain joueurHumain(nomJoueur1, couleurJoueur1);
        j1 = &joueurHumain;

        cout << "Entrez le nom du Joueur 2 : ";
        string nomJoueur2;
        cin >> nomJoueur2;

        cout << "Entrez la couleur du Joueur 2 : ";
        string couleurJoueur2;
        cin >> couleurJoueur2;

        //Joueur* j2;
        JoueurHumain joueurHumain2(nomJoueur2, couleurJoueur2);
        j2=&joueurHumain;

        int largeurPlateau;
        int hauteurPlateau;
        cout<<"Quelle est la largeur du plateau ? ";
        cin>>largeurPlateau;
        cout<<"Quelle est la hauteur du plateau ? ";
        cin>>hauteurPlateau;

        Plateau plateau(largeurPlateau, hauteurPlateau);
}
Partie::~Partie() {}


void Partie::jouerUnTour(Joueur* j){
    plateau.afficher();
    int colonne = j->Joue();
    int ligne =-1;
    while(ligne==-1)
    {
        int ligne = plateau.placerJeton(colonne, j->getCouleur());
        if (ligne == -1) {
        cout << "Colonne pleine! Choisissez une autre colonne." << endl;}
    }
}

void Partie::jouePartie()
{
    cout<<"Jusqu'ici tout est ok"<<endl;
    //LE PB EST LA DANS LA BOUCLE WHILE ! C'EST J1->GETCOULEUR() QUI MARCHE PAS JE CROIS
    //string c1=j1->getCouleur();
    //cout<<c1;
    while(plateau.gagnant(j1->getCouleur())==false && plateau.gagnant(j2->getCouleur())==false && plateau.estPlein()==false)
    {
        jouerUnTour(j1);
        if(plateau.gagnant(j1->getCouleur())==true){
            cout<<"Le joueur 1 a gagne !"<<endl;
            return;
        }
        jouerUnTour(j2);
        if(plateau.gagnant(j2->getCouleur())==true){
            cout<<"Le joueur 2 a gagne !"<<endl;
            return;
        }
    }
}
