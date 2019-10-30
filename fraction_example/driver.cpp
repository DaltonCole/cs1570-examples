// Header stuff

#include <iostream>
#include "fraction.h"

using namespace std;

int main() {
	Fraction f, g, h;
	int tmp;

	f.readin();

	cin >> tmp;
	g.setNum(tmp);
	cin >> tmp;
	g.setDen(tmp);

	h = mult_frac(f, g);
	h.print();
	cout << endl;

	return 0;
}
