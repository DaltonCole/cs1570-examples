

#include <iostream>
#include <cstdlib>
#include "matrix.h"

using namespace std;

int main() {
    srand(time(NULL));

    int rows = 4;
    int cols = 3;
    Matrix<int> m(rows, cols, 0);

    int min = 0;
    int max = 9;


    cout << "Using function operator: " << endl;
    m(1, 2) = 2;
    cout << m(1, 2) << endl;

    cout << "Filling matrix with random values..." << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            m(i, j) = (rand() % (max - min)) + min;
        }
    }
    
    cout << "Print matrix:" << endl;
    cout << m << endl;

    return 0;
}
