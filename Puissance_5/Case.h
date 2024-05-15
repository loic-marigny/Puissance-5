#ifndef CASE_H_INCLUDED
#define CASE_H_INCLUDED

#include <string>
using namespace std;

class Case{
private:
    string couleur;
    bool contientJeton;
    int posLigne;
    int posColonne;
public:
    Case(string c, bool cj, int pl, int pc);
    ~Case();
    void setCouleur(string c);
    void remplirCase();
    string getCouleur() const;
    bool getContientJeton() const;
};

#endif // CASE_H_INCLUDED
