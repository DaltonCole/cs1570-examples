// Header stuff

#include <iostream>
#include "fraction.h"
#include "cat.h"

using namespace std;

int main() {
	Fraction f(1, 2), g(2, 3);
    Cat fluffy;

    cout << (f == g) << endl;
    cout << (f == Fraction(1, 2)) << endl;
   
    f = fluffy;
    cout << f << endl;

    cout << ~f << endl;

    f[0] = 12;
    f[1] = 13;

    cout << f[0] << endl;
    cout << f[1] << endl;
    cout << f << endl;

    f(9, 12);
    cout << f << endl;


	return 0;
}
