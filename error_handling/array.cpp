#include <iostream>

using namespace std;

int main() {
    // Declare array
    const int size = 10;
    int arr[size];
    int index;
    // Populate array
    for(int i = 0; i < size; i++) {
        arr[i] = i;
    }

    cin >> index;

    try {
        if(index < 0) {
            throw "Array indexes must be positive!";
        } else if(index >= size) {
            throw "Array index must be less than the max size!";
        }
        cout << arr[index] << endl;
    } catch(const char* const e) { // Catch thrown exception of type NTCA
        cout << e << endl;
    } catch(...) { // Catch any exception
        cout << "What type of crazy exception did you just pull off??" << endl;
    }

    return 0;
}
