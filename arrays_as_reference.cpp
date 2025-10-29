//
// Created by gasin on 10/27/2025.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref(const vector<string> &v);
void pass_ref2(string &s);

void pass_by_ref(const vector<string> &v) {
    for (auto name:v)
        cout<<name<<" ";
    cout<<endl;
    //v.at(1) = "Davis";
    //v.at(3) = "James";
}

void pass_ref2(string &s) {
    s = "changed";
}


int main() {

    vector<string> three_stooges {"Larry", "Moe", "curly"};

    pass_by_ref(three_stooges);
    pass_by_ref(three_stooges);

    string t {"Frank"};
    cout<<"The string before calling the function "<<t<<endl;
    pass_ref2(t);
    cout<<"The string after calling the function "<<t<<endl;


    return 0;
}