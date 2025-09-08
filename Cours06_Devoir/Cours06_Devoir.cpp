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
	int a = 20;
	int b = 30;
	int c = 50;
	bool reponseB = c == a + b && (b - 30 > 0 || b - a > 0);


	int d = -10;
	int e = 100;
	int f = -55;
	bool reponseC = (d > 0 || e > 0) && (d > e || (e > 0 || f > 0));


	double g = -10.0;
	int h = 100;
	string i = "i";
	bool reponseD = ((g == -10.0 && h == g) || i == "I" || (h > g && i == "i");


	// Affichage des réponses finales pour vous aider à valider partiellement 

	cout << format("Réponse finale A : {}\n", reponseA);
	cout << format("Réponse finale B : {}\n", reponseB);
	cout << format("Réponse finale C : {}\n", reponseC);
	cout << format("Réponse finale D : {}\n", reponseD);
}