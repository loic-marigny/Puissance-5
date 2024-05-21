#include "Partie.h"
#include <iostream>

using namespace std;

Partie::Partie(int rp) : finPartie(false), refPartie(rp), plateau(7, 6) {
    string nomJoueur1, nomJoueur2, couleurJoueur1, couleurJoueur2;

    cout << "Entrez le nom du Joueur 1 : ";
    cin >> nomJoueur1;
    cout << "Entrez la couleur du Joueur 1 : ";
    cin >> couleurJoueur1;

    j1 = new JoueurHumain(nomJoueur1, couleurJoueur1);

    cout << "Entrez le nom du Joueur 2 : ";
    cin >> nomJoueur2;
    cout << "Entrez la couleur du Joueur 2 : ";
    cin >> couleurJoueur2;

    j2 = new JoueurHumain(nomJoueur2, couleurJoueur2);
}

Partie::~Partie() {
    delete j1;
    delete j2;
}

void Partie::jouePartie() {
    Joueur* joueur_actuel = j1;

    while (!finPartie) {
        plateau.afficher();
        int colonne = joueur_actuel->Joue();

        while (colonne < 0 || colonne >= plateau.getLargeur()) {
            cout << "Erreur: La colonne choisie ne fait pas partie du plateau. Veuillez choisir une autre colonne." << endl;
            colonne = joueur_actuel->Joue();
        }

        int ligne = plateau.placerJeton(colonne, joueur_actuel->getCouleur());

        if (ligne == -1) {
            cout << "Colonne pleine! Choisissez une autre colonne." << endl;
            continue;
        }

        if (plateau.gagnant(joueur_actuel->getCouleur())) {
            plateau.afficher();
            cout << "Le gagnant est : " << joueur_actuel->getNom() << "!" << endl;
            finPartie = true;
        } else if (plateau.estPlein()) {
            plateau.afficher();
            cout << "Match nul!" << endl;
            finPartie = true;
        } else {
            joueur_actuel = (joueur_actuel == j1) ? j2 : j1;
        }
    }
}

void Partie::jouerUnTour(Joueur* j) {
    plateau.afficher();
    int colonne = j->Joue();

    while (colonne < 0 || colonne >= plateau.getLargeur()) {
        cout << "Erreur: La colonne choisie ne fait pas partie du plateau. Veuillez choisir une autre colonne." << endl;
        colonne = j->Joue();
    }

    int ligne = plateau.placerJeton(colonne, j->getCouleur());

    while (ligne == -1) {
        cout << "Colonne pleine! Choisissez une autre colonne." << endl;
        colonne = j->Joue();
        while (colonne < 0 || colonne >= plateau.getLargeur()) {
            cout << "Erreur: La colonne choisie ne fait pas partie du plateau. Veuillez choisir une autre colonne." << endl;
            colonne = j->Joue();
        }
        ligne = plateau.placerJeton(colonne, j->getCouleur());
    }
}
