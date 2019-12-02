
#include <iostream>
using namespace std;

template <typename T>
class Matrix {
    private:
        T** matrix;
        int rows;
        int columns;
    public:
        // Constructor
        Matrix(int r, int c, T default_value);
        // Destructor
        ~Matrix();

        // Get Value
        T operator()(const int r, const int c) const;
        // Set Value
        T& operator()(const int r, const int c);

        template <typename U>
        friend ostream& operator<<(ostream& os, const Matrix<U>& m);

};


#include "matrix.hpp"
