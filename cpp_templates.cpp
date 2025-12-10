// STL
// Created by gasin on 11/27/2025.
//

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;


int main() {
    vector<char> v {'a', 'f', 'd'};
    vector<string> v2;

    v.push_back('e');

    v.insert(v.begin() + 1, 'c');

    // for (auto c: v) {
    //     cout<<c<<endl;
    // }
    //
    // cout<<v[4]<<endl;
    cout<<v.size()<<endl;
    v[7] = 'h';
    // v2[0] = "hi";
    // v2.push_back("gagan");
    // cout<<v2.at(0)<<endl;
    //v2.at(1) = "hello";

    //cout<<v[7]<<endl;


    //cout<<v.at(7)<<endl;

    cout<<v.size();

    v.pop_back();

    for (auto c: v) cout<<c<<endl;

    return 0;
}
