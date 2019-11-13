#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
    private:
        int m_num;
        int m_den;
        static int count;
    public:
        Fraction() {count++;}
        ~Fraction() {count--;}
        // Has to be an integer type for some dumb (but good) reason
        static const int some_constant = 10;
        static int get_count();
};


#endif
