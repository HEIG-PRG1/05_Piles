#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <limits>
#include "pile.hpp"
using namespace std;


int main() {
    int reponse = 0;
    Pile pile;
    int count = 0;

    cout << "Ce programme permet de manipuler une pile d'entiers." << endl << endl;

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

        do {
            cout << "Votre choix : ";
            cin >> reponse;


            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Erreur : Saisie invalide" << endl;
                reponse = -1;
            }
        } while (reponse < 0 || reponse > 8);

        try {
            switch (reponse) {
                case 1:
                    push();
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    top();
                    break;
                case 4:
                    top();
                    break;
                case 5:
                    empty();
                    break;
                case 6:
                    cout << "Nombre de valeurs : " << size(count) << endl;
                    break;
                case 7:
                    clear(count);
                    cout << "Pile vidée." << endl;
                    break;
                case 8:
                    show_pile(pile, count);
                    break;
                case 0:
                    cout << "Fin de programme." << endl;
                    break;
            }
        } catch (const exception& erreur) {
            cout << "Erreur : " << erreur.what() << endl;
        }
    } while (reponse != 0);








    return EXIT_SUCCESS;
}