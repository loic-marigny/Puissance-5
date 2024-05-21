#include "Case.h"

Case::Case(std::string c, bool cj, int pl, int pc)
    : couleur(c), contientJeton(cj), posLigne(pl), posColonne(pc) {}

Case::~Case() {}

void Case::setCouleur(std::string c) {
    couleur = c;
}

void Case::remplirCase() {
    contientJeton = true;
}

std::string Case::getCouleur() const {
    return couleur;
}

bool Case::getContientJeton() const {
    return contientJeton;
}
