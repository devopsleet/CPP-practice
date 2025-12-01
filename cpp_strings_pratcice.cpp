//
// Created by gasin on 10/7/2025.
//

#include <iostream>
#include <string>
#define NL "\n"

using namespace std;

int main() {
    string s = "Hello! I am practicing C!!!";

    decltype(s.size()) pnct_cnt = 0;

    for (auto c: s) {
        if (ispunct(c)) {
            pnct_cnt++;
        }
    }

    cout << "In total there are " << pnct_cnt << " punctuation marks";

    int character = char('c');
    cout<<character<<endl;


    return 0;
}
