//
// Created by lordelbardooo on 11/18/26.
//
#include <array>
#include <iostream>
#include <exception>

#ifndef INC_05_PILES_FUNCTION_H
#define INC_05_PILES_FUNCTION_H
std::array<int, 5>* push(const int new_element, std::array<int, 5>& stack, const int vide);
int size(std::array<int, 5>& stack, const int vide);
void pop(std::array<int, 5>& stack, const int vide);

int top(std::array<int, 5>& stack, const int vide);
void top(const int new_element,std::array<int, 5>& stack, const int vide);
bool empty(std::array<int, 5>& stack, const int vide);
std::array<int, 5>* clear(std::array<int, 5>& stack, const int vide);

#endif //INC_05_PILES_FUNCTION_H
