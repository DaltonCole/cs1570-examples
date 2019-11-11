// Purpose: To demonstrate pointers

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(NULL));

    // Normal variable
    int x = rand() % 100;

    // Reference to x - x and reference are the *exact* same thing
    int& reference = x;

    // Pointer to x
    int* pointer = &x;

    // Value
    cout << "Value of x: " << x << endl;
    cout << "Value of reference: " << reference << endl;
    cout << "Value of pointer: " << pointer << endl << endl;

    // Memory address
    cout << "Memory address of x: " << &x << endl;
    cout << "Memory address of reference: " << &reference << endl;
    cout << "Memory address of pointer: " << &pointer << endl << endl;

    // Dereferencing
    cout << "Dereferencing pointer: *pointer = " << *pointer << endl;

    cout << "x == *pointer : " << (x == *pointer) << endl;

    return 0;
}
