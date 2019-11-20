#include <iostream>
#include "helpers.h"

using namespace std;

int main() {
    int x = 1;
    int *p = &x;

    cout << "Normal:            " << *p << endl;

    pass_pointer_update_object(p);
    cout << "Pass Pointer:      " << *p << endl;

    pass_pointer_point_to_local_variable(p);
    cout << "Local Point:       " << *p << endl;

    // Probably won't error, but might, so don't do
    pass_pointer_by_reference_point_to_local_variable(p);
    cout << "Pass-By-Reference: " << *p << endl;

    return 0;
}
