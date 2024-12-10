#include <iostream>
#include "Course.h"
#include "Competiteur.h"
#include "Participation.h"
#include "Course_Slalom.h"

int main()
{
    // Création des compétiteurs
    Competiteur* A = new Competiteur("Perinne", "Pellen", 60, 12);
    Competiteur* B = new Competiteur("Ingrid", "Sternmark", 8, 10);
    Competiteur* C = new Competiteur("Adriana", "Sacuquard", 18, 15);
    Competiteur* D = new Competiteur("Fabian", "Von Gruenigen", 3, 7);
    Competiteur* E = new Competiteur("Phil", "Mahre", 16, 22);
    Competiteur* F = new Competiteur("Hanni", "Wenzel", 4, 6);
    Competiteur* G = new Competiteur("Jean-Baptiste", "Grange", 6, 23);
    Competiteur* H = new Competiteur("Christa", "Kinshofer", 14, 9);
    Competiteur* I = new Competiteur("Tomba", "Alberto", 5, 5);
    Competiteur* J = new Competiteur("Maria", "Bassino", 7, 13);
    Competiteur* K = new Competiteur("Nina", "Ortlieb", 11, 20);
    Competiteur* L = new Competiteur("Luca", "Aerni", 19, 19);
    Competiteur* M = new Competiteur("Nathalie", "Sterling", 12, 17);
    Competiteur* N = new Competiteur("Ticlia", "Heiss", 21, 11);
    Competiteur* O = new Competiteur("Marc", "Dalphare", 2, 21);
    Competiteur* P = new Competiteur("Patrick", "Russel", 10, 14);
    Competiteur* Q = new Competiteur("Michael", "Neon", 23, 3);
    Competiteur* R = new Competiteur("Irene", "Boruff", 13, 24);
    Competiteur* SS = new Competiteur("Boby", "Smith", 17, 18);
    Competiteur* T = new Competiteur("Sabina", "Mankenton", 15, 8);
    Competiteur* U = new Competiteur("Mamootand", "Mann", 9, 0);
    Competiteur* V = new Competiteur("Mannie", "Mantan", 2, 0);
    Competiteur* W = new Competiteur("Mammut", "Manfred", 5, 0);
    Competiteur* X = new Competiteur("Mandred", "Mander", 4, 0);
    Competiteur* Y = new Competiteur("Mone", "Mone", 6, 0);
    Competiteur* Z = new Competiteur("Lama", "Lamer", 11, 0);
    Competiteur* AA = new Competiteur("Mammothand", "Manthony", 3, 0);
    Competiteur* BB = new Competiteur("Bambi", "Brice", 8, 0);
    Competiteur* CC = new Competiteur("Bamby", "Brison", 9, 0);
    Competiteur* DD = new Competiteur("Emanuelle", "Mannette", 10, 0);
    Competiteur* EE = new Competiteur("Aisha", "Nael", 13, 0);
    Competiteur* FF = new Competiteur("Hanna", "Ish", 18, 0);

    // Tableau des inscriptions avec une taille adaptée
    int nombreParticipants = 100;
    Participation* lesParticipants = new Participation[nombreParticipants];


    // Ajout des participations dans le tableau
    Participation P1(0, 60, A);
    lesParticipants[0] = P1;
    Participation P2(0, 120, B);
    lesParticipants[1] = P2;
    Participation P3(0, 30, C);
    lesParticipants[2] = P3;

    Participation P4(0, 28, D);
    lesParticipants[3] = P4;
    Participation P5(0, 1, E);
    lesParticipants[4] = P5;
    Participation P6(0, 3, F);
    lesParticipants[5] = P6;
    Participation P7(0, 6, G);
    lesParticipants[6] = P7;
    Participation P8(0, 12, H);
    lesParticipants[7] = P8;
    Participation P9(0, 3, I);
    lesParticipants[8] = P9;

    Participation P10(0, 61, J);
    lesParticipants[9] = P10;
    Participation P11(0, 12, K);
    lesParticipants[10] = P11;
    Participation P12(0, 3, L);
    lesParticipants[11] = P12;

    Participation P13(0, 6, M);
    lesParticipants[12] = P13;
    Participation P14(0, 23, N);
    lesParticipants[13] = P14;
    Participation P15(0, 31, O);
    lesParticipants[14] = P15;

    Participation P16(0, 22, P);
    lesParticipants[15] = P16;
    Participation P17(0, 33, Q);
    lesParticipants[16] = P17;
    Participation P18(0, 44, R);
    lesParticipants[17] = P18;

    Participation P19(0, 19, SS);
    lesParticipants[18] = P19;
    Participation P20(0, 20, T);
    lesParticipants[19] = P20;
    Participation P21(0, 43, U);
    lesParticipants[20] = P21;

    Participation P22(0, 42, V);
    lesParticipants[21] = P22;
    Participation P23(0, 41, W);
    lesParticipants[22] = P23;
    Participation P24(0, 40, X);
    lesParticipants[23] = P24;

    Participation P25(0, 39, Y);
    lesParticipants[24] = P25;
    Participation P26(0, 35, Z);
    lesParticipants[25] = P26;
    Participation P27(0, 23, AA);
    lesParticipants[26] = P27;

    Participation P28(0, 10, BB);
    lesParticipants[27] = P28;
    Participation P29(0, 9, CC);
    lesParticipants[28] = P29;
    Participation P30(0, 44, DD);
    lesParticipants[29] = P30;

    Participation P31(0, 12, EE);
    lesParticipants[30] = P31;
    Participation P32(0, 11, FF);
    lesParticipants[31] = P32;

    // Création de la course de slalom avec les participants
    CourseSlalom S("Course1", "20 / 01 / 2025", lesParticipants);

    // Affichage des participants sans dossard
    S.afficheLesParticipants();
    std::cout << "--------------------------------------------------------------------------\n";

    // Attribution des dossards
    S.traitementDossards();

    // Affichage des participants avec dossard
    S.afficheLesParticipants();

}