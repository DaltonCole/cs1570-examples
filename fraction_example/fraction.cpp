// Header

#include "fraction.h"

Fraction::Fraction(const int n, const int d) {
    m_num = n;
    setDen(d);
}

void Fraction::readin() {
	cout << "Enter the numerator: ";
	cin >> m_num;
	cout << "Enter the denominator: ";
	cin >> m_den;
	
	return;
}

void Fraction::print() const {
	cout << m_num << " / " << m_den << endl;
	return;
}

Fraction Fraction::reciprocal() const {
	Fraction tmp;
	tmp.m_num = m_den;
	tmp.m_den = m_num;

	return tmp;
}

void Fraction::unreduce(const int m) {
	m_num *= m;
	m_den *= m;

	return;
}

void Fraction::setNum(const int n) {
	m_num = n;
	return;
}

bool Fraction::setDen(const int d) {
	bool good = false;
	if(d != 0) {
		m_den = d;
		good = true;
	}
	return true;
}

Fraction mult_frac(const Fraction& lhs, const Fraction& rhs) {
	// Declare
	Fraction tmp;
	
	// Build
	tmp.m_num = lhs.m_num * rhs.m_num;
	tmp.m_den = lhs.m_den * rhs.m_den;

	// Return
	return tmp;
}













