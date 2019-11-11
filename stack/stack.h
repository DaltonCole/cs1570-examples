// Header
// Purpose: Demonstrate templating classes

#ifndef STACK_H
#define STACK_H

const int MAX_SIZE = 100;

template <typename T>
class Stack {
    private:
        T m_data[MAX_SIZE];
        int m_size;
    public:
        Stack(): m_size(0) {}
        Stack(const Stack<T>& other);
        bool push(const T& datum);
        bool pop(T& dadum);
        bool isFull() const {return m_size >= MAX_SIZE;}
        bool isEmpty() const {return m_size <= 0;}
};

#include "stack.hpp"

#endif
