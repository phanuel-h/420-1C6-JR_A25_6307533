// Devoirs05_Booleens.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.

//	Auteur		: Phanuel
//	Date		: 2025/09/02
//	Description	: Devoirs sur les Booléens

#include <iostream> // Importation des librairies
#include <format>
#include <string>

using namespace std;




int main()
{ 
    setlocale(LC_ALL, "fr_FR.UTF-8"); // Configuration de la console en français unicode 
   
    std::cout << "--- Devoir 05 - Ibenue - 6307533 ---\n";
    using std::format;
    using std::cout;
    using std::cin;
    using std::string;
    
    




// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.

cout << "Entrer la largeur du rectangle : ";
int largeurRectangle; 
cin >> largeurRectangle; 
    
    cout << "Entrer la hauteur du rectangle : "; 
    int hauteurRectangle; 
    cin >> hauteurRectangle; 

    if (largeurRectangle <= 0)
    {
        cout << "Erreur : largeur ne peut être 0 ou négative.";
    }
    else if (hauteurRectangle <= 0)
    {
        cout << "Erreur : hauteur ne peut être 0 ou négative.";
    }

else if (largeurRectangle == hauteurRectangle) 
{ 
    cout << format("Carré {} par {}\n", largeurRectangle, hauteurRectangle); 
}
    else if (largeurRectangle > hauteurRectangle) {
        
        cout << format("Rectangle {} par {}\n", largeurRectangle,hauteurRectangle); 
           
            double ratioHauteur = largeurRectangle / hauteurRectangle; 
        
        cout << format("{:.3f}% plus large que haut\n", ratioHauteur); 
} 
else {
    cout << format("Rectangle{} par{}\n", largeurRectangle, hauteurRectangle); 
    cout << "Plus haut que large\n"; 
    
           double RatioLargeur = hauteurRectangle / largeurRectangle; 
            
            cout << format("{:.3f}% plus haut que large\n", RatioLargeur); 
} 

        double aire = largeurRectangle * hauteurRectangle; 
        double PERIMÈTRE = 2 * (largeurRectangle + hauteurRectangle);
       
        cout << format("Aire : {:.2f}\n", aire); 
   
    cout << format("Perimètre : {:.2f}\n", PERIMÈTRE); 

    system("pause"); 
    system("cls");


}