// Array and Poiters
// Created by gasin on 11/9/2025.
//

#include <iostream>

using namespace std;

void display(const int *const arr, const int s) {
    while (*arr != s) {
        cout << *arr++ << " ";
    }
}

int main() {
    int scores[]{100, 99, 98, 97, 96, -1};

    display(scores, -1);

    return 0;
}
