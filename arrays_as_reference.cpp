//
// Created by gasin on 10/27/2025.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref(vector<string> &v);

void pass_by_ref(vector<string> &v) {
    for (auto name:v)
        cout<<name<<" ";
    cout<<endl;
    v.at(1) = "Davis";
    //v.at(3) = "James";
}


int main() {

    vector<string> three_stooges {"Larry", "Moe", "curly"};

    pass_by_ref(three_stooges);
    pass_by_ref(three_stooges);

    return 0;
}