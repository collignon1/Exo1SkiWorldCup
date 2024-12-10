#ifndef COURSE_SLALOM_H
#define COURSE_SLALOM_H

#include "Participation.h"
#include <string>
#include "Course.h"
#include "Participation.h"

class CourseSlalom : public Course
{
private:
    std::string nom;
    std::string date;
    Participation* participants;


public:
    // Constructeur
    CourseSlalom(std::string nom, std::string date, Participation* participants);

    // Méthodes
    void afficheLesParticipants();
    void traitementDossards();
    int attribuerDossards(int BorneInf, int BorneSup);
};
#endif