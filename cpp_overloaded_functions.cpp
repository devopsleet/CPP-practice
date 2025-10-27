//
// Created by gasin on 10/26/2025.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);

void print(string);

void print(double = 123.5); // default value provided

void print(string, string);

void print(vector<string>);

void print(int num) {
    cout << "Printing int:" << num << endl;
}

void print(double num) {
    cout << "Printing double:" << num << endl;
}

void print(string s) {
    cout << "Printing string:" << s << endl;
}

void print(string s, string t) {
    cout << "Printing 2 strings:" << s << " and " << t << endl;
}

void print(vector<string> v) {
    cout << "Printing vector of strings:";
    for (auto s: v) {
        cout << s + " ";
    }
    cout << endl;
}

int main() {
    print(); // call an overloaded function with a default value
    print(100);
    print('A');

    print(124.5);
    print(124.5f);

    print("C-style string"); // converts c style string to a c++ string object

    string s{"C++ string"};
    print(s);

    print("C", s);

    vector<string> three_stooges{"Larry", "Moe", "Curly"};
    print(three_stooges);

    return 0;
}
