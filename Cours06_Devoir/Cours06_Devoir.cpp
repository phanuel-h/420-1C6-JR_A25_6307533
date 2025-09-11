// Cours06_Devoir.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
/*
Auteur			: Phanuel
Date			: 2025/09/07
Description		:D
*/
#include <iostream>
#include <format>
#include <string>
using namespace std;

int main()
{
	// Configuration de la console en Unicode pour les accents
	setlocale(LC_ALL, "fr_FR.UTF-8");

	// Affichage de l'en-tête
	cout << "--- Devoir06 - Ibenue Bapidi Dodie Phanuel- 6307533--\n";
	bool reponseA = 10 > 5 || (45 <= 40 && "a" != "b");

	// 10 > 5 || (45 <= 40 && "a" != "b"); 
	// 
	// 1) true ||  (45 <= 40 && "a" != "b");
	// 2) true ||  (false && "a" != "b");
	//3)  true ||  (false && false);
	// 4)  true ||false ;
	// 5)  true ;
	int a = 20;
	int b = 30;
	int c = 50;
	bool reponseB = c == a + b && (b - 30 > 0 || b - a > 0);

	// (-10 > 0 || 100 > 0) && (-10 > 100 || (100 > 0 || -55 > 0));
	// 1) false || true) && (-10 > 100 || (100 > 0 || -55 > 0));
	// 2)  true && (-10 > 100 || (100 > 0 || -55 > 0));
	// 3) true && (false|| (100 > 0 || -55 > 0));
	// 4) true && (false|| (TRUE || -55 > 0));
	// 5) true && (false|| (TRUE || false));
	// 6) true && (false|| TRUE );
	//7 ) true && TRUE ;
	//8) true
	int d = -10;
	int e = 100;
	int f = -55;
	bool reponseC = (d > 0 || e > 0) && (d > e || (e > 0 || f > 0));

	//((-10.0 == -10.0 && 100 == g) || i == "I" || (100 > 10.0 && i == "i");

	// 1) ((TRUE && 100 == -10.0) || i == "I" || (100 > -10.0 && i == "i");
	// 2) ((TRUE && FALSE) || i == "I" || (100 > -10.0 && i == "i");
	// 3) (FALSE|| i == "I" || (100 > -10.0 && i == "i");
	// 4) (FALSE|| i == "I" || (TRUE && i == "i");
	// 5) (FALSE|| i == "I" || (TRUE && TRUE);
	// 6) (FALSE|| i == "I" || TRUE) ;
	// 7) (FALSE|| FALSE|| TRUE) ;
	// 8) (FALSE|| TRUE) ;
	// 9) TRUE ;

	double g = -10.0;
	int h = 100;
	string i = "i";
	bool reponseD = ((g == -10.0 && h == g) || i == "I" || (h > g && i == "i");


	// Affichage des réponses finales pour vous aider à valider partiellement 

	cout << format("Réponse finale A : {}\n", reponseA);
	cout << format("Réponse finale B : {}\n", reponseB);
	cout << format("Réponse finale C : {}\n", reponseC);
	cout << format("Réponse finale D : {}\n", reponseD);


	// EXERCICE 2
	cout << "EXERCICE 2";

	cout << "Entrer le monatnt total de la facture :\n";
	double montantTotaleFacture;
	cin >> montantTotaleFacture;

	cout << "Entere le nombre de produit achetés\n";
	int nombreProduit;
	cin >> nombreProduit;

	cout << "Entrer le type de membre (or, argent,bronze): \n"














}