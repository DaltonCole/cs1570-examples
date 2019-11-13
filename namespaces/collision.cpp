// This program purposely does not compile

#include <iostream>

namespace bob {
    void bob() {std::cout << "bob'b bob" << std::endl;}
}

namespace john {
    void bob() {std::cout << "john's bob" << std::endl;}
}

using namespace bob;

int main() {
    bob();
    john::bob();

    return 0;
}
