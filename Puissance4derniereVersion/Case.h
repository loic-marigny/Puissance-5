#ifndef CASE_H_INCLUDED
#define CASE_H_INCLUDED

using namespace std;

class Case{
protected :
    string couleur;
    bool contientJeton=false;
    int posLigne;
    int posColonne;
public :
    Case(string c, bool cj, int pl, int pc);
    ~Case();
    void setCouleur(string c);
    void remplirCase();
    string getCouleur();
    bool getContientJeton();
};

#endif // CASE_H_INCLUDED
