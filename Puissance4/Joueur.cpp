#include <iostream>
#include "Joueur.h"
#include "JoueurHumain.h"
#include "JoueurIA.h"



using namespace std;

Joueur::Joueur(string n, string c):nom{n}, couleur {c} {}
Joueur::~Joueur() {}

