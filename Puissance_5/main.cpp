#include <iostream>
#include "Jeu.h"
#include "JoueurHumain.h"
#include "JoueurIA.h"

using namespace std;

int main(){
    Joueur* j1 = new JoueurHumain("Alice", "Rouge");
    Joueur* j2 = new JoueurIA("IA", "Jaune");
    Jeu jeu(7, 6, j1, j2);
    jeu.lancer();
    return 0;
}
