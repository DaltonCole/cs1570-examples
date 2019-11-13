#include <iostream>
using namespace std;

int main() {
    enum Color {Blue, Green, Red};
    enum Coin {Head=5, tail=3};

    Color hue = Blue;
    // Color shade = 2; // Not valid
    Color shade = Color(2);
    int num = Green; // Color enum is type promoted

    if(shade == Red) {
        cout << "Shade is red" << endl << endl;
    }

    // I'm cool and wanted to make this of 8-bit uint type
    //  only works in c++11
    enum Names: uint8_t {Dalton=3, Russell=7, Cole};
    for(int i = 0; i < 10; i++) {
        Names n = Names(i);
        switch(i) {
            case(Dalton):
                cout << "Dalton" << endl;
                break;
            case(Russell):
                cout << "Russell" << endl;
                break;
            case(Cole):
                cout << "Cole" << endl;
                break;
            default:
                cout << n << endl;
        }
    }


    return 0;
}
