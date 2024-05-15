void Jeu::lancer(){
    while(true){
        plateau.afficher();
        int colonne = joueurCourant->Joue();
        int ligne = plateau.placerJeton(colonne, joueurCourant->getCouleur());
        if (ligne == -1) {
            cout << "Colonne pleine! Choisissez une autre colonne." << endl;
            continue;
        }
        if(verifierGagnant(joueurCourant, ligne, colonne)){
            plateau.afficher();
            cout << "Le gagnant est : " << joueurCourant->getNom() << "!" << endl;
            return;
        }
        if(plateau.estPlein()){
            plateau.afficher();
            cout << "Match nul!" << endl;
            return;
        }
        joueurCourant = (joueurCourant == joueur1) ? joueur2 : joueur1;
    }
}
