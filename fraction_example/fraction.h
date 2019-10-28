// Header stuff
// Purpose: To demonstrate how to set up a class (with a fraction example)

#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction {
	public:
		void readin();
		void print();
		Fraction reciprocal();
		void unreduce(const int m);

	private:
		int m_num;
		int m_den;
};

#endif
