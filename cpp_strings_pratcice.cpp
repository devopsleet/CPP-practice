//
// Created by gasin on 10/7/2025.
//

#include <iostream>
#include <string>
#define NL "\n"

using namespace std;

int main() {
    string line;

    while (getline(cin, line)) {
        if (!line.empty())

            cout << line << endl;
    }

    // string s1, s2;
    //
    // cin>>s1>>s2;
    // cout<<s1<<s2<<endl;

    return 0;
}
