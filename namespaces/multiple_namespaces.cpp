#include <iostream>

namespace bob {
    void bob() {std::cout << "bob" << std::endl;}
}

namespace john {
    void john() {std::cout << "john" << std::endl;}
}

int main() {
    bob::bob();
    john::john();

    return 0;
}
