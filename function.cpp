//
// Created by lordelbardooo on 11/18/26.
//
#include "function.h"

void push(const int new_element,std::array<int, 5>& stack, int& virtual_size) {
    // check if the virtual size of stack is < than the max size of stack.
    if (virtual_size<stack.size()) {
        // push the element.
        stack.at(virtual_size) = new_element;
        virtual_size++;
        return;
    }
    // we cant push any element.
    throw(1);
}
void pop(std::array<int, 5>& stack, int& virtual_size) {
    // check if the virtual size is not null.
    if (virtual_size > 0) {
        // erase the last element of the stack.
        virtual_size--;
    }
    else {
        // suicide
        throw(1);
    }
}
int top(std::array<int, 5>& stack, int& virtual_size) {
    // this method returns the last element of the stack.
    if (virtual_size > 0) {
        return stack.at(virtual_size-1);
    }
    throw(1);
}
void top(const int new_element,std::array<int, 5>& stack, int& virtual_size) {
    // this method turns the last element of the stack into new_element.
    if (virtual_size > 0) {
        // the stack is not null.
        stack.at(virtual_size-1) = new_element;
    }
}
bool empty(std::array<int, 5>& stack, int& virtual_size) {
    // is the virtual size of stack null ?
    return (virtual_size==0)?true:false;
}
void clear(const std::array<int, 5>& stack, int& virtual_size) {
    set_size(virtual_size, 0);
}

void set_size(int& vsize, int new_size) {
    vsize=new_size;
}
unsigned short size(const int virtual_size) {
    // return the virtual size of the stack.
    return virtual_size;
}

void print_pile(const std::array<int, 5>& stack, const int vsize) {
    std::string text_sommet = "Sommet ->";
    std::string text_fond = "Fond   ->";
    unsigned int num_spacing = std::max(text_sommet.length(), text_fond.length());
    std::string spacing = "";
    for (int i = 0; i < num_spacing; i++) {
        spacing += " ";
    }
    for (int i = vsize-1; i>=0; --i) {
        if (i == vsize-1) {
            std::cout << text_sommet;
            std::cout << stack.at(i) << std::endl;
        }
        else if (i == 0) {
            std::cout << text_fond;
            std::cout << stack.at(i) << std::endl;
        }
        else {
            std::cout << spacing << stack.at(i) << std::endl;
        }

    }
}