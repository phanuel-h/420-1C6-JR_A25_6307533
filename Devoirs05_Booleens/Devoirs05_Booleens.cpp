// Devoirs05_Booleens.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.

//	Auteur		: Phanuel
//	Date		: 2025/09/02
//	Description	: Devoirs sur les Booléens

#include <iostream> // Importation des librairies
#include <format>
#include <string>
#include <ctime>

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

        cout << format("Rectangle {} par {}\n", largeurRectangle, hauteurRectangle);

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

    // **** EXERCICE 2****//
    cout << "EXERCIE 2";
    cout << "Entre le premier nombre exemple:(12.0)";
    double nombre1;
    cin >> nombre1;

    cout << "Entre le deuxieme nombre a virgule exemple:(12.0)";
    double nombre2;
    cin >> nombre2;

    double calculDifference = nombre1 - nombre2;
    if (calculDifference > 0)
    {
        cout << format("Nombres {}  et {} ont une difference de {:.3f}\n", nombre1, nombre2, calculDifference);

    }
    else if (calculDifference == 0)
    {
        cout << format("Nombres {}  et {} sont égaux\n", nombre1, nombre2);
    }
    else
    {
        cout << format("Nombres {} et {} sont inferieur à 0", nombre1, nombre2);
    }
    //****EXERCICE 3****/
    cout << "EXERICE3\n";
    cout << "Entrer un couriel: \n";
    string courriel;
    cin >> courriel;

    cout << "COnfirmer le courriel\n";
    string confirmationCourriel;
    cin >> confirmationCourriel;

    if (confirmationCourriel == courriel)
    {
        cout << "Entrer un mot de passe\n";
        string motDePasse;
        cin >> motDePasse;

        cout << "confirmer le mot de passe\n";
        string confirmationMotdePasse;
        cin >> confirmationCourriel;
        if (confirmationMotdePasse != motDePasse)
        {
            cout << "Erreur : mots de passe différents, création du compte annulée.\n";
        }
        else
        {
            cout << format("Succès : nouveau compte {} a été créé!\n", confirmationCourriel);
        }
    }
    else
    {
        cout << "Erreur : courriels différents, création du compte annulée.";
    }
    //exercice 4
    cout << "EXERCICE 4\n";
    cout << "--- Réservation de billets d’événements ---\n";
    
    cout << "entrer le nombre de personne (négatifs pour un remboursement) :";
    double nombrePersonne;
    cin >> nombrePersonne;
    double prixBilltes = 29.99;
    double total1 = nombrePersonne * prixBilltes;
    int rabais1 = 10;
    int rabais2 = 25;
    string aucunRabais = "Aucun rabais\0";

    double rabais10 = prixBilltes * (rabais1 / 100);
    double rabais25 = prixBilltes * ( rabais2 / 100);

    if (nombrePersonne > 50)
    {
        cout << format("Sous-Total : {}$ \n",total1);
        cout << format("Rabais : {}$\n", rabais2);
        cout << format("Total : {}$ \n", rabais25);
    }
    else if (nombrePersonne > 20)
    {
        cout << format("Sout-total$  : {}\n Rabais : {}$ \n Total : {}$\n", total1, rabais1, rabais10);

    }
    else if (nombrePersonne <20)
    {
        cout << format("Sout-total$  : {}\n Rabais : {}$ \n Total : {}$\n", total1, aucunRabais,total1);
    }
    else if (nombrePersonne < 0)
    {
        
        double remboursement1 = prixBilltes - nombrePersonne;
        cout << "Entrer le total de la facture originale :  \n";
        double factureOriginale;
        cin >> factureOriginale;
        
        cout << "Entrer le nombre de jours avant l’événement :  \n";
        int jourAvantEvenement;
        cin >> jourAvantEvenement;

        double pourcentage1 = (100 / 100) * 100;
        double pourcentage2 = (50 / 100) * 100;
        double pourcentage3 = (10 / 100) * 100;
        double remboursement2 = pourcentage3/ jourAvantEvenement;

        double total7 = remboursement1 - pourcentage1;
        double total7_5 = remboursement1 - pourcentage2;
        double totalMoins5 = remboursement1 - pourcentage3;

         if (jourAvantEvenement >= 7)
        {
            cout << format("Pourcentage de remboursement : {}\n Total originale : {}\n Total du remboursement : {}\n", pourcentage1,factureOriginale,total7,nombrePersonne);

        }
         else if (jourAvantEvenement >= 5 <= 7)
         {
             cout << format("Pourcentage de remboursement : {}\n Total originale : {}\n Total du remboursement : {}\n", pourcentage2, factureOriginale, total7_5, nombrePersonne);
         }

         else if (jourAvantEvenement < 5)
         {
             cout << format("Pourcentage de remboursement : {}\n Total originale : {}\n Total du remboursement : {}\n Remboursement par personne : {}\n"
                 , pourcentage3, factureOriginale, totalMoins5, nombrePersonne,remboursement2);
         }

        else if (jourAvantEvenement <= 0)
             {
                    cout << "Erreur : événement a déjà eu lieu il y a ### jours, impossible d’effectuer un remboursement.";
               }
    }
    system("pause");
    system("cls");

    cout << "EXERCICE 5\n";
    cout << "-- Réservation d'un siège d'avion -- \n Catégorie disponibles (affaire, Premium ,economie)";
    cout << "Entrez une categorie";
    string categorie;
    cin >> categorie;

    if (categorie != "affaire" && categorie != "premium" && categorie != "economie")
    {
        cout << "Erreur : la catégorie " << categorie << " n’existe pas,réservation annulée. ";
    }
    int siege;
    int siegeMin;
    int siegeMax;
    if (categorie == "affaire") {
        siegeMin = 1;
        siegeMax = 20;
        cout << "Sélectionner un siège affaire [1 à 20] : ";
    }
    else if (categorie == "premium") {
        siegeMin = 21;
        siegeMax = 50;
        cout << "Sélectionner un siège premium [21 à 50] : ";
    }
    else { // economie
        siegeMin = 51;
        siegeMax = 150;
        cout << "Sélectionner un siège économie [51 à 150] : ";
    }



}   
