#include "Participation.h"
#include "Competiteur.h"

// Constructeurs
Participation::Participation()
{
    this->classement = 0;
    this->numDossard = 0;
    this->competiteur = NULL;
}

Participation::Participation(int numDossard, int classement, Competiteur* competiteur)
{
    this->classement = classement;
    this->numDossard = numDossard;
    this->competiteur = competiteur;
}

// Getters
int Participation::getNumDossard()
{
    return numDossard;
}

Competiteur* Participation::getCompetiteur()
{
    return this->competiteur;
}

// Setter
void Participation::setNumDossard(int dossard)
{
    numDossard = dossard;
}