// Compile: g++ driver.cpp
// Run: ./a.out some arguments this can be anything

#include <iostream>
using namespace std;


// The names of the parameters do not matter
//      argc is the number of arguments given
//      argv are the arguments given as "NTCAs"
// Think of char** as a 2d array, i.e. [][]
//      This is essentially an array of NTCAs,
//      treat it as such.
int main(int argc, char** argv) {
    cout << "You have " << argc << " number of elements, including the executable." << endl;

    cout << endl << "These arguments are: " << endl;
    for(int i = 0; i < argc; i++) {
        cout << argv[i] << endl;
    }

    return 0;
}
