// Strings
// Created by gasin on 11/17/2025.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Hello World!!";

    decltype(s.size()) punc_cnt = 0;

    for (auto c: s) {
        if (ispunct(c)) {
            ++punc_cnt;
        }
    }

    cout << "Total number of punctuation characters are " << punc_cnt << endl;


    return 0;
}
