// Comment block

void pass_pointer_update_object(int * p) {
    *p = 12;
    return;
}

void pass_pointer_point_to_local_variable(int * p) {
    int x = 5;
    p = &x;
    return;
}

// Bad one
void pass_pointer_by_reference_point_to_local_variable(int *& p){
    int x = 3;
    p = &x;
    return;
}
