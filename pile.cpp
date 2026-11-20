//
// Created by Sam on 18.11.2026.
//
#include <iostream>
#include "pile.hpp"
#include <array>
#include <iomanip>

using namespace std;


void push(Pile& pile, int n, int& count)
{
    if (pile_size <= count)
    {
        throw std::out_of_range("la pile est pleine");
    }
    pile.at(count) = n;
    count++;

}
void pop()
{

}
void top();
bool empty(const int& count)
{
    if (count == 0)
    {
        return true;
    }
    return false;
}
int size(const int& count)
{
    return count;
}
void clear(int& count)
{
    count = 0;
}
void show_pile(const Pile& pile, const int& count)
{
    if (empty(count))
    {
        cout << "La pile est vide." << endl;
    }
    else if (count == 1)
    {
        cout << "Sommet / Fond -> " << pile[0] << endl;
    }
    else
    {
        for (int i = count - 1; i >= 0; --i)
        {
            if (i == count - 1)
            {
                cout << "Sommet ->";
            }
            else if (i == 0)
            {
                cout << "Fond   ->";
            }
            else
            {
                cout << "         ";
            }
            cout << pile[i] << endl;
        }
    }
}