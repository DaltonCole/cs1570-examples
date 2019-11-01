// Header stuff

#include <iostream>
#include "fraction.h"

using namespace std;

int main() {
	Fraction f, g(10), h(17, 32), z(h);

    f.print();
    g.print();
    h.print();
    z.print();

	return 0;
}
