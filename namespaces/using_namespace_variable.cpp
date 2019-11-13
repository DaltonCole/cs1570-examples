#include <iostream>

// Bring in std's cout and endl
using std::cout;
using std::endl;

namespace bob {
    void bob() {cout << "bob'b bob" << endl;}
}

namespace john {
    void bob() {cout << "john's bob" << endl;}
}

int main() {
    // No longer need to scope bob's bob
    bob::bob();
    john::bob();

    return 0;
}
