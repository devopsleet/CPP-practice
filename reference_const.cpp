// Reference to Const
// Created by gasin on 11/14/2025.
//

#include <iostream>

using namespace std;

int main() {

    const int ci = 1024;
    const int &r1 = ci;
    r1 = 42;

    return 0;
}