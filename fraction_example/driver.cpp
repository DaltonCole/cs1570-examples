// Header stuff

#include <iostream>
#include "fraction.h"

using namespace std;

int main() {
	Fraction f(1, 2), g(2, 3);

    cout << (f * g) << endl;

    f *= g;

    cout << f << endl;

	return 0;
}
