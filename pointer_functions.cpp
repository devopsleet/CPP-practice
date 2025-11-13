// Pointers and Functions
// Created by gasin on 11/11/2025.
//

#include <iostream>

using namespace std;

int *getPointer() {
    int *x = new int(10);
    cout << x << endl;
    cout << *x << endl;
    cout << &x;
    return x;
}

int main() {
    int *p{nullptr};

    p = getPointer();

    cout << *p << endl;

    delete p;

    p = nullptr;


    return 0;
}
