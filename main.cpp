//
// Created by maxsc on 18.11.2026.
//

#include "main.h"
#include "affichage.h"
#include "constantes.h"
#include "function.h"
#include <array>
#include <iostream>

int main () {
    int compteur= 0;
    std::array <int, 5> pille;
    pille.fill(get_zero());
    std::cout<<"Tableau : [";
    for (int i = 0; i <pille.size(); i++)
    {
        std::cout<<pille.at(i);
        if (i != pille.size()-1)
        {
            std::cout<<", ";
        }
        if (pille.at(i)!= get_zero())
        {
            compteur++;
        }
    }
    std::cout<<"]"<<std::endl;
    std::cout<<"Compteur : "<<compteur<<std::endl;
    int selection =0;
    do
    {
        affichage_menu();
        std::cin>>selection;
    }
    while (selection < 0 || selection > 8);
    int newvalue = 0;
    switch (selection) {
        case 0:
            break;
        case 1:
            std::cout<<"Valeur :";
            std::cin>>newvalue;
            push(newvalue, pille,vsize);
                break;
        case 2:
            pop(pille,vsize);
            break;
        case 3:
            top(pille,vsize);
           break;
        case 4:
            std::cout<<"Valeur :";
            std::cin>>newvalue;
            top(newvalue,pille,vsize);
            break;
        case 5:
            empty(pille,vsize);
            break;
        case 6:
            size(vsize);
            break;
        case 7:
            break;
            clear(pille, vsize);
        case 8:
            print_pile(pille,vsize);
            break;
    }



}
