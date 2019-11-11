// Header
// Purpose: To demonstrate templating classes

#include <iostream>
#include <cstdlib>
#include "stack.h"

using namespace std;

struct Cat {
    int cutness;
    int clawness;
};

int main() {
    srand(time(NULL));

    Stack<int> s_int;
    Stack<float> s_float;
    Stack<Cat> s_cat;
    int tmp;
    const int MAX = 42;

    cout << "--- Pushing ---" << endl;
    for(int i = 0; i < 10; i++) {
        tmp = rand() % MAX;
        cout << i << ": " << tmp << endl;
        s_int.push(tmp);
    }

    cout << "--- Popping ---" << endl;
    while(s_int.pop(tmp)) {
        cout << tmp << endl;
    }

    return 0;
}
