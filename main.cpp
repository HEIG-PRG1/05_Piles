//
// Created by maxsc on 18.11.2026.
//

#include <iostream>
#include <array>
#include "function.h"

int main() {
    // use it as a parameter for any further func.
    const unsigned short virtual_size = 4;
    std::array<int,5> text_a = {1,2,3,4,5};
    print_pile(text_a,5);
    return 0;
}
#include "affichage.h"
#include "constantes.h"
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


}
