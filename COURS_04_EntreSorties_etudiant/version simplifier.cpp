#include <iostream>   // Entr�es/sorties (cout, cin)
#include <string>     // Cha�nes de caract�res (string)
#include <format>     // Mise en forme moderne (C++20)

using namespace std;

int main() {
    // --- Configuration des accents ---
    setlocale(LC_ALL, "fr_CA.UTF-8");

    cout << "--- Exemple simplifi� C++ ---\n\n";

    // --- Saisie utilisateur ---
    string nom;
    int age;
    double taille;

    cout << "Entrer votre nom : ";
    cin >> nom;

    cout << "Entrer votre �ge : ";
    cin >> age;

    cout << "Entrer votre taille (en m�tres) : ";
    cin >> taille;

    // --- Affichage format� ---
    cout << format("\nBonjour {}, vous avez {} ans et mesurez {:.2f} m�tres !\n",
        nom, age, taille);

    // --- Exemple de calcul ---
    int a = 10, b = 3;
    double resultat = (double)a / b; // conversion pour avoir un r�sultat d�cimal

    cout << format("\nExemple de division : {}/{} = {:.2f}\n", a, b, resultat);

    // --- Pause avant fermeture ---
    cout << "\nAppuyez sur Entr�e pour quitter...";
    cin.ignore(); // ignore la touche pr�c�dente
    cin.get();    // attend Entr�e

    return 0;
}
