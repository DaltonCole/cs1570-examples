// Header

#include "fraction.h"

Fraction::Fraction(const int n, const int d) {
    m_num = n;
    setDen(d);
}

Fraction operator*(const Fraction& lhs, const Fraction& rhs) {
    Fraction result(lhs);
    return result *= rhs;
}

Fraction& Fraction::operator*=(const Fraction& rhs) {
    m_num *= rhs.m_num;
    m_den *= rhs.m_den;
    return *this;
}

ostream& operator<<(ostream& o, const Fraction& f) {
    o << "(" << f.m_num << "/ " << f.m_den << ")";
    return o;
}

bool operator==(const Fraction& lhs, const Fraction& rhs) {
    return (lhs.m_num * rhs.m_den) == (lhs.m_den * rhs.m_num);
}

bool operator!=(const Fraction& lhs, const Fraction& rhs) {
    return !(lhs == rhs);
}

int& Fraction::operator[](const int index) {
    return (index == 0) ? m_num : m_den;    
}

void Fraction::operator()(const int n, const int d) {
    m_num = n;
    m_den = d;
    return;
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

Fraction& Fraction::operator=(const Cat& kitty) {
    m_num = kitty.m_num_lives;
    m_den = kitty.m_legs;
    return *this;
}











