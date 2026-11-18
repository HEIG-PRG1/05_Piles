#include <iostream>
#include <cstdlib>
#include "pile.hpp"
using namespace std;


int main() {
    int reponse = 0;

    do {
        cout << "1 - Empiler\n"
             << "2 - Dépiler\n"
             << "3 - Consulter le sommet\n"
             << "4 - Modifier l'élément au sommet\n"
             << "5 - Vérifier si la pile est vide\n"
             << "6 - Afficher le nombre de valeurs\n"
             << "7 - Vider la pile\n"
             << "8 - Afficher toute la pile\n"
             << "0 - Quitter" << endl;
         cin >> reponse;
        switch (reponse) {
            case 1:
                cout << "Votre choix: " << reponse << endl;
                empiler();
            case 2:
                cout << "Votre choix: " << reponse << endl;
                depiler();
                break;
            case 3:
                cout << "Votre choix: " << reponse << endl;
                top();
                break;
            case 4:
                cout << "Votre choix: " << reponse << endl;
                modifierTop();
                break;
            case 5:
                cout << "Votre choix: " << reponse << endl;
                empty();
                break;
            case 6:
                cout << "Votre choix: " << reponse << endl;
                size();
                break;
            case 7:
                cout << "Votre choix: " << reponse << endl;
                clear();
                break;
            case 8:
                cout << "Votre choix: " << reponse << endl;
                afficherPile();
                break;
            case 0:
                cout << "Votre choix: " << reponse << endl;
                cout << "Fin de programme." << endl;
                break;
            default:
                cout << "Choix invalide." << endl;
                break;
        }
    } while (reponse != 0);








    return EXIT_SUCCESS;
}