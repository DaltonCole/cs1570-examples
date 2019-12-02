// Header for the Matrix class

#include <iostream>
using namespace std;

template <typename T>
class Matrix {
    private:
        T** matrix;
        int rows;
        int columns;
    public:
        // Constructors
        Matrix(): rows(0), columns(0) {}
        Matrix(const int r, const int c, const T default_value);

        // Get Value
        T operator()(const int r, const int c) const;
        // Set Value
        T& operator()(const int r, const int c);

        template <typename U>
        friend ostream& operator<<(ostream& os, const Matrix<U>& m);

};

#include "matrix.hpp"
