#ifndef PARTICIPATION_H
#define PARTICIPATION_H

#include "Competiteur.h"

class Competiteur;

class Participation 
{
private:
    int numDossard;
    int classement;
    Competiteur* competiteur;

public:

    // Constructeurs
    Participation();
    Participation(int numDossard, int classement, Competiteur* competiteur);

    // Getters
    int getNumDossard();
    Competiteur* getCompetiteur();

    // Setter
    void setNumDossard(int dossard);
};
#endif