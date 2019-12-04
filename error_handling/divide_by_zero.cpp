#include <iostream>
using namespace std;

int main() {
    int i, j, k;
    i = 10;
    j = 0;
    try {
        k = i / j;
    } catch(...) {
        cout << "d" << endl;
    }

    return 0;
}
