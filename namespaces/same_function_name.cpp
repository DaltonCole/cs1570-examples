#include <iostream>

namespace bob {
    void bob() {std::cout << "bob'b bob" << std::endl;}
}

namespace john {
    void bob() {std::cout << "john's bob" << std::endl;}
}

int main() {
    bob::bob();
    john::bob();

    return 0;
}
