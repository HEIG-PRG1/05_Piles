//
// Created by Sam on 18.11.2026.
//
#ifndef PILE_H
#define PILE_H
#include <array>

const int pile_size = 5;
using Pile = std::array<int, pile_size>;

void push();
void pop();
void top();
void empty();
int size(const int& count);
void clear(int& count);
void show_pile(const Pile& pile, const int& count);

#endif //PILE_H
