#ifndef COMPETITEUR_H
#define COMPETITEUR_H

#include <string>

class Competiteur 
{
private:
    int numeroCompetiteur;
    std::string nomCompetiteur;
    std::string prenomCompetiteur;
    int ClassementFIS;
    int ClassementWCSL;

public:
    // Constructeurs
    Competiteur();
    Competiteur(const std::string nom, const std::string prenom, int ClassementFIS, int ClassementWCSL);

    // Getters
    std::string getNom();
    std::string getPrenom();
    int GetClassementFIS();
    int GetClassementWCSL();
};
#endif