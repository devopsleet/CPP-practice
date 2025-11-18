//
// Created by gasin on 10/30/2025.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1;

    for (size_t i{0}; i < 100; ++i) {
        v1.push_back(i);
    }

    cout << v1.at(99);


    return 0;
}
