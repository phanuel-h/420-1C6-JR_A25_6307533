// Devoirs07.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <format>
#include <string>

using namespace std;

// Notes

const int NOTE_A_MAX = 100;
const int NOTE_A_MIX = 90;
const int NOTE_B_MAX = 89;
const int NOTE_B_MIN = 80;
const int NOTE_C_MAX = 79;
const int NOTE_C_MIN = 70;
const int NOTE_D_MAX = 69;
const int NOTE_D_MIN = 60;

const int NOTE_F_MAX = 59;
const int NOTE_F_MIN = 0;

// LETTRES

const char NOTE_A_MAJ = 'A';
const char NOTE_A_MINs = 'a';
const char NOTE_B_MAJ = 'B';
const char NOTE_B_MINS = 'b';
const char NOTE_C_MAJ = 'C';
const char NOTE_C_MINS = 'c';
const char NOTE_D_MAJ = 'D';
const char NOTE_D_MINS = 'd';
const char NOTE_F_MAJ = 'F';
const char NOTE_F_MINS = 'f';

int main()
{
    std::cout << "Hello World!\n";

    // Exercice 1

    cout << "Entrer une note finale = A, B, C, D, F";
    char noteFinale;
    cin >> noteFinale;

    switch (noteFinale)
    {
    default:
        break;
    }

    //ExERCICE 2

    cout << "Entrer le jour (1 - 31) :";
    int Jour;
    cin >> Jour;

    cout << "Entrer le mois (1 - 12) :";
    int mois;
    cin >> mois;









}


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
