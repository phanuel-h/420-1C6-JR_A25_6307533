#include <iostream>   // Entrées/sorties (cout, cin)
#include <string>     // Chaînes de caractères (string)
#include <format>     // Mise en forme moderne (C++20)

using namespace std;

int main() {
    // --- Configuration des accents ---
    setlocale(LC_ALL, "fr_CA.UTF-8");

    cout << "--- Exemple simplifié C++ ---\n\n";

    // --- Saisie utilisateur ---
    string nom;
    int age;
    double taille;

    cout << "Entrer votre nom : ";
    cin >> nom;

    cout << "Entrer votre âge : ";
    cin >> age;

    cout << "Entrer votre taille (en mètres) : ";
    cin >> taille;

    // --- Affichage formaté ---
    cout << format("\nBonjour {}, vous avez {} ans et mesurez {:.2f} mètres !\n",
        nom, age, taille);

    // --- Exemple de calcul ---
    int a = 10, b = 3;
    double resultat = (double)a / b; // conversion pour avoir un résultat décimal

    cout << format("\nExemple de division : {}/{} = {:.2f}\n", a, b, resultat);

    // --- Pause avant fermeture ---
    cout << "\nAppuyez sur Entrée pour quitter...";
    cin.ignore(); // ignore la touche précédente
    cin.get();    // attend Entrée

    return 0;
}
