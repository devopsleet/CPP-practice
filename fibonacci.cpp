//
// Created by gasin on 10/28/2025.
//
#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    cout << fibonacci(30);
    return 0;
}
