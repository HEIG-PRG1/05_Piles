//
// Created by lordelbardooo on 11/18/26.
//
#include "function.h"

std::array<int, 5>* push(const int new_element,std::array<int, 5>& stack, const int vide) {
    const int virtual_size = size(stack,vide);
    // check if the virtual size of stack is < than the max size of stack.
    if (virtual_size<stack.size() && new_element != vide) {
        // push the element.
        stack.at(virtual_size) = new_element;
        return &stack;
    }
    // we cant push any element.
    throw(1);
}
void pop(std::array<int, 5>& stack, const int vide) {
    const int virtual_size = size(stack,vide);
    // check if the virtual size is not null.
    if (virtual_size > 0) {
        // erase the last element of the stack.
        stack.at(virtual_size-1) = vide;
    }
    else {
        // suicide
        throw(1);
    }
}
int top(std::array<int, 5>& stack, const int vide) {
    // this method returns the last element of the stack.
    const int virtual_size = size(stack,vide);
    if (virtual_size > 0) {
        return stack.at(virtual_size-1);
    }
    throw(1);
}
void top(const int new_element,std::array<int, 5>& stack, const int vide) {
    // this method turns the last element of the stack into new_element.
    const int virtual_size = size(stack,vide);
    if (virtual_size > 0) {
        // the stack is not null.
        stack.at(virtual_size-1) = new_element;
    }
}
bool empty(std::array<int, 5>& stack, const int vide) {
    // is the virtual size of stack null ?
    return size(stack,vide);
}
std::array<int, 5>* clear(std::array<int, 5>& stack, const int vide) {
    const int virtual_size = size(stack,vide);
    for (size_t i = 0; i <virtual_size; ++i) {
        // set all elements of stack to <vide>
        stack.at(i) = vide;
    }
    return &stack;
}

int size(std::array<int, 5>& stack, const int vide) {
    // return the virtual size of the stack.
    int current_size = 0;
    for (size_t i = 0; i< stack.size(); ++i) {
        if (i == vide) {
            return current_size;
        }
        current_size++;
    }
    return current_size;
}