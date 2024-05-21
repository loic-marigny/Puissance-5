#ifndef CASE_H_INCLUDED
#define CASE_H_INCLUDED

#include <string>

class Case {
protected:
    std::string couleur;
    bool contientJeton;
    int posLigne;
    int posColonne;

public:
    Case(std::string c, bool cj, int pl, int pc);
    ~Case();

    void setCouleur(std::string c);
    void remplirCase();
    std::string getCouleur() const;
    bool getContientJeton() const;
};

#endif // CASE_H_INCLUDED
