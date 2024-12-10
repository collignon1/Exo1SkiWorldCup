#include "Competiteur.h"

// Constructeurs
Competiteur::Competiteur() : nomCompetiteur(""), prenomCompetiteur(""), ClassementFIS(0), ClassementWCSL(0) {}

Competiteur::Competiteur(const std::string nom, const std::string prenom, int ClassementFIS, int ClassementWCSL)
{
    this->nomCompetiteur = nom;
    this->prenomCompetiteur = prenom;
    this->ClassementFIS = ClassementFIS;
    this->ClassementWCSL = ClassementWCSL;
}


// Getters
std::string Competiteur::getNom()
{
    return nomCompetiteur;
}

std::string Competiteur::getPrenom()
{
    return prenomCompetiteur;
}

int Competiteur::GetClassementFIS()
{
    return ClassementFIS;
}


int Competiteur::GetClassementWCSL()
{
    return ClassementWCSL;
}