//
// Created by gasin on 10/30/2025.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s{"some string"};

    for (auto it {s.begin()}; it != s.end() && !isspace(*it); ++it) {
        (*it) = static_cast<char>(toupper(*it));
    }

    cout<<s<<endl;
}
