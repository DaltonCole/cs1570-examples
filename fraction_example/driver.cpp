// Header stuff

#include <iostream>
#include "fraction.h"

using namespace std;

int main() {
	Fraction f, g;

	f.readin();
	f.unreduce(2);
	g = f.reciprocal();

	f.print();
	cout << endl;
	g.print();
	cout << endl;

	return 0;
}
