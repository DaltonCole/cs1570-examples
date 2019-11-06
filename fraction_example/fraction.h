// Header stuff
// Purpose: To demonstrate how to set up a class (with a fraction example)

#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <fstream>
#include "cat.h"
using namespace std;

class Fraction {
	public:
		Fraction(const int n=0, const int d=1);
        // But you said the copy constructor is given to you! Why are you
        //   making one?? Because I felt like it okay!
        Fraction(const Fraction & rhs): m_num(rhs.m_num), m_den(rhs.m_den) {}

        //--- Operators ---//
        // *, *=
        friend Fraction operator*(const Fraction& lhs, const Fraction& rhs);
        Fraction& operator*=(const Fraction& rhs);
        // <<
        friend ostream& operator<<(ostream& o, const Fraction& f);
        // ==, !=
        friend bool operator==(const Fraction& lhs, const Fraction& rhs);
        friend bool operator!=(const Fraction& lhs, const Fraction& rhs);
        // ~
        Fraction operator~() const {return Fraction(m_den, m_num);}
        // []
        int& operator[](const int index);
        // ()
        void operator()(const int n, const int d);


        // General Functions
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
	
        // Weird stuff
        Fraction& operator=(const Cat& kitty);
    
    private:
		int m_num;
		int m_den;
};

#endif
