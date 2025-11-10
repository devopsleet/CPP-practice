// Pointers and Constants
// Created by gasin on 11/10/2025.
//

#include <iostream>

using namespace std;

int main() {
    int high_score{100};
    int low_score{60};

    const int *ptr{&high_score};

    // pointer to constant
    *ptr = 86;

    return 0;
}
