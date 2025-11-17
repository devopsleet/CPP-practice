// Strings
// Created by gasin on 11/17/2025.
//

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    string s = "hell world";

    for (decltype(s.size()) index=0; index <s.size() && !isspace(s[index]); ++index) {
        s[index] = toupper(s[index]);
    }

    cout<<s<<endl;

    // for (auto &c: s) {
    //     c = toupper(c);
    // }
    //
    // cout<<s<<endl;
    // string s = "Hello World!!";
    //
    // decltype(s.size()) punc_cnt = 0;
    //
    // for (auto c: s) {
    //     if (ispunct(c)) {
    //         ++punc_cnt;
    //     }
    // }

    //cout << "Total number of punctuation characters are " << punc_cnt << endl;


    return 0;
}
