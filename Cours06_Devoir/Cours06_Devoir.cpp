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
	// 3) true ||  (false && true);
	// 4) true ||  false;
	// 5) true

	int a = 20;
	int b = 30;
	int c = 50;
	bool reponseB = c == a + b && (b - 30 > 0 || b - a > 0);
	
	// 50 == 20 + 30 && (30-30 > 0 || 30 - 20 > 0);

	// 1) 50 == 20 + 30 && (0> 0 || 30 - 20 > 0);
	// 2) 50 == 20 + 30 && (false || 30 - 20 > 0);
	// 3) 50 == 20 + 30 && (false || 10 > 0);
	// 4)  50 == 20 + 30 && (false || true);
	// 5) TRUE && (false || true);
	// 6) TRUE &&  true;
	// 7) true3.

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

	// EXERCICE 2
	cout << "enter le total de la facture : ";
	double totalFacture;
	cin >> totalFacture;

	cout << "entere le nombre de profuit achetés : \n";
	int NombreProduit;
	cin >> NombreProduit;

	cout << "entrer le type de memebre (or, argent,bronze): \n";
	string typeMembre;
	cin >> typeMembre;

	double rabais = 0;
	


	if (typeMembre == "or")

	{
		if (totalFacture > 30)
		{
			rabais = 20;
		}
	}
	else if (typeMembre == "argent")
	{
		if (totalFacture >= 50 || NombreProduit >= 5)
		{
			rabais = 10;
		}
	}

	else if (typeMembre == "bronze")
	{
		if (totalFacture >= 100 && NombreProduit >= 10)
		{
			rabais = 5;
		}
	}
	
	cout << format("*** Rabais *** \n Membre \t:{}\n Nombre de produits \t:{}\n Sous-total \t:\n"
		,typeMembre,NombreProduit);

	cout << "--- Achat de billets 3/49 ---";

	cout << "enter le numero 1:";
	int numero1;
	cin >> numero1;
	if (numero1 >= 1 && numero1 <= 49)
	{
		cout << "Entrer le numero 2:";
		int numero2;
		cin >> numero2;

		if (numero2 >= 1 && numero2 <= 49 )
		{
			cout << "Entrer le numero 3:";
			int numero3;
			cin >> numero3;

			if (numero3 == numero2 || numero3 == numero3)
			{
				cout << format("le nombre {} a déjà été sélectionné, achat annulé.",numero3)
			}

			else
			{
				cout << format("le nombre {} n’est pas entre 1 et 49, achat annulé.", numero3)
			}
		}
		else if (numero2 == numero1)
		{
			cout << format("le nombre {} a déjà été sélectionné, achat annulé.",numero2)
		}
		else 
		
		{
			cout << format("le nombre {} n’est pas entre 1 et 49, achat annulé.",numero2)
		}
	
	}
		int ordreNum = 

	else if (numero1 > numero2)
		cout <<"numeros croissant du billet: "
	}

	
	

	

}