//
// Created by gasin on 10/30/2025.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> scores(11, 0);

    unsigned grade;

    cout << "Enter the value of a grade between 1 to 100";
    cin >> grade;

    if (grade <= 100) {
        ++scores[grade / 10];
    }

    cout << "The value in " << (grade/10) + 1 << " = " << scores[grade / 10];

    return 0;
}
