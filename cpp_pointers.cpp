// Simple pointers
// Created by gasin on 11/8/2025.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int num{10};

    cout << "Value of num is " << num << endl;
    cout << "size of num is " << sizeof num << endl;
    cout << "Address of num is " << &num << endl;

    int *p;
    cout << "\n" << "Value of p is " << p << endl;
    cout << "size of p is " << sizeof p << endl;
    cout << "Address of p is " << &p << endl;

    p = nullptr;

    cout << "\n" << "Value of p is " << p << endl;

    int *ptr1{nullptr};
    double *ptr2{nullptr};
    unsigned long long *ptr3{nullptr};
    vector<string> *ptr4{nullptr};

    cout << "size of ptr1 " << sizeof ptr1 << endl;
    cout << "size of ptr4 " << sizeof ptr4 << endl;

    return 0;
}
