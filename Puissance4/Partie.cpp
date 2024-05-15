#include <iostream>
#include "Case.h"
#include "Plateau.h"
#include "Partie.h"

using namespace std;

Case::Case(string c, bool cj, int pl, int pc) : couleur {c}, contientJeton {cj}, posLigne{pl}, posColonne{pc} {}
Case::~Case() {}
