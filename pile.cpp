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
void clear();