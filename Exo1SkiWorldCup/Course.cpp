#ifndef COURSE_CPP
#define COURSE_CPP

#include "Course.h"

// Constructeur
Course::Course(std::string nomCompetition, std::string dateCompetition, Participation* participants)
{
	this->nomCompetition = nomCompetition;
	this->dateCompetition = dateCompetition;
	this->lesParticipants = participants;
}


void Course::classerLesParticipantsParDossards(bool ordered)
{
	int i, j;
	Participation temp;
	for (i = 0; i < 31; i++)
	{
		for (j = i + 1; j < 31; j++)
		{
			if (lesParticipants[i].getNumDossard() > lesParticipants[j].getNumDossard())
			{
				temp = lesParticipants[i];
				lesParticipants[i] = lesParticipants[j];
				lesParticipants[j] = temp;
			}
		}
	}
}

// Méthode virtuelle traitementDossards (à redéfinir dans les sous-classes)
void Course::classerLesParticipantsWCSL(bool ordered)
{
	int i, j;
	Participation temp;
	for (i = 0; i < 31; i++)
	{
		for (j = i + 1; j < 31; j++)
		{
			if (lesParticipants[i].getCompetiteur()->GetClassementWCSL() > lesParticipants[j].getCompetiteur()->GetClassementWCSL())
			{
				temp = lesParticipants[i];
				lesParticipants[i] = lesParticipants[j];
				lesParticipants[j] = temp;
			}
		}
	}
}

void Course::classerLesParticipantsFIS(bool ordered)
{
	int i, j;
	Participation temp;
	for (i = 0; i < 31; i++)
	{
		for (j = i + 1; j < 31; j++)
		{
			if (lesParticipants[i].getCompetiteur()->GetClassementFIS() > lesParticipants[j].getCompetiteur()->GetClassementFIS())
			{
				temp = lesParticipants[i];
				lesParticipants[i] = lesParticipants[j];
				lesParticipants[j] = temp;
			}
		}
	}
}

// Destructeur
Course::~Course()
{

}
#endif