// Header

#include "fraction.h"

void Fraction::readin() {
	cout << "Enter the numerator: ";
	cin >> m_num;
	cout << "Enter the denominator: ";
	cin >> m_den;
	
	return;
}

void Fraction::print() {
	cout << m_num << " / " << m_den;
	return;
}

Fraction Fraction::reciprocal() {
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
