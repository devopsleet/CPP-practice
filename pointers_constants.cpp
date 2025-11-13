// Pointers and Constants
// Created by gasin on 11/10/2025.
//

#include <iostream>

using namespace std;


// compound statement
void double_data(int *int_ptr) {
    *int_ptr *= 2;
}

int main() {

    extern const &var_list;



    // int value{10};
    // int *int_ptr{nullptr};
    //
    // cout << "Value before pointer " << value << endl;
    // double_data(&value);
    // cout << "Value after pointer " << value << endl;
    //
    // cout << "----------------------------------------" << endl;
    // int_ptr = &value;
    //
    // double_data(int_ptr);
    // cout << "Value after pointer " << value << endl;


    return 0;
}
