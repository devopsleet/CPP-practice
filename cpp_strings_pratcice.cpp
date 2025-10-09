//
// Created by gasin on 10/7/2025.
//

#include <iostream>
#include <string>
#define NL "\n"

using namespace std;

int main() {
    string s1 {"The secret word is Boo"};

    string word;

    cout<<"Enter the word";
    cin>>word;

    if (size_t pos = s1.find(word); pos != string::npos) {
        cout<<"Word Found"<<endl;
    } else {
        cout<<"Not Found"<<endl;
    }
    return 0;
}
