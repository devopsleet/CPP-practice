//
// Created by gasin on 10/7/2025.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    const string s1 {"frank"};

    for (const int c: s1) {
        cout<<c<<endl;
    }

    cout<<s1.length()<<endl;
    cout<<s1.at(5);

    return 0;
}