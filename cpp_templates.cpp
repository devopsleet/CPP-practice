// STL
// Created by gasin on 11/27/2025.
//

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;


template<typename T>
T myMax(T a, T b) {
    return (a > b) ? a : b;
}


int main() {
    cout << myMax<int>(3, 4) << endl;

    return 0;
}
