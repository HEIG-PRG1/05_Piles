//
// Created by lordelbardooo on 11/18/26.
//
#include <array>
#include <iostream>
#include <string>
#include <cmath>
#include <exception>

#ifndef INC_05_PILES_FUNCTION_H
#define INC_05_PILES_FUNCTION_H

void push(const int new_element, std::array<int, 5>& stack, int& vsize);
unsigned short size(const int vsize);
void set_size(int& vsize, int new_size);
void pop(std::array<int, 5>& stack, int& vsize);

int top(std::array<int, 5>& stack, const int vide);
void top(const int new_element,std::array<int, 5>& stack, int& vsize);
bool empty(const std::array<int, 5>& stack, int& vsize);
void clear(const std::array<int, 5>& stack, int& virtual_size);

void print_pile(const std::array<int, 5>& stack, const int vsize);

#endif //INC_05_PILES_FUNCTION_H
