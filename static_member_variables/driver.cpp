#include <iostream>
#include "fraction.h"

using namespace std;

void function_that_acceses_some_constant() {
    cout << Fraction::some_constant << endl;
    return;
}


int main() {
    Fraction more[3];

    cout << "Calling \"function_that_acceses_some_constant\": "; 
    function_that_acceses_some_constant();

    { 
        Fraction a, b[1000];

        cout << Fraction::get_count() << endl;
    }

    cout << Fraction::get_count() << endl;
    return 0;
}
