#include <iostream>
#include "Case.h"

using namespace std;

Case::Case(string c, bool cj, int pl, int pc) : couleur {c}, contientJeton {cj}, posLigne{pl}, posColonne{pc} {}
Case::~Case() {}

void Case::setCouleur(string c){
    couleur=c;
}

void Case::remplirCase()
{
    contientJeton=true;
}

string Case::getCouleur()
{
    return couleur;
}

bool Case::getContientJeton()
{
    return contientJeton;
}
