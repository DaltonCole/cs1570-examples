// Header stuff
// Purpose: To demonstrate how to set up a class (with a fraction example)

#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction {
	public:
		Fraction(const int n=0, const int d=1);
        // But you said the copy constructor is given to you! Why are you
        //   making one?? Because I felt like it okay!
        Fraction(const Fraction & rhs): m_num(rhs.m_num), m_den(rhs.m_den) {}

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
