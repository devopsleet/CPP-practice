// Simple pointers
// Created by gasin on 11/8/2025.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int *create_array(size_t size, int init_val = 0) {
    int *new_storage{nullptr};

    new_storage = new int[size];

    for (size_t i{0}; i < size; ++i) {
        *(new_storage + i) = init_val;
    }

    return new_storage;
}


void display(int *arr, size_t size) {
    for (size_t i{0}; i < size; i++) {
        cout << *arr++ << " ";
    }
    cout << endl;
}

int main() {
    int *myarr{nullptr};

    size_t size{};

    int init_val;

    cout << "What should be the size of your array";
    cin >> size;

    cout << "Would you like to initialize your array ";
    cin >> init_val;

    myarr = create_array(size, init_val);

    display(myarr, size);

    delete [] myarr;


    return 0;
}
