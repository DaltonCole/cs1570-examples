// Header stuff
// Purpose: To demonstrate how to set up a class (with a fraction example)

#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction {
	public:
		void readin();
		void print() const;
		Fraction reciprocal() const;
		void unreduce(const int m);
		// Getters
		int getNum() const {return m_num;}
		int getDen() const {return m_den;}
		// Setters
		void setNum(const int n);
		bool setDen(const int d);
		// Friends
		friend Fraction mult_frac(const Fraction& lhs, const Fraction& rhs);
	private:
		int m_num;
		int m_den;
};

#endif
