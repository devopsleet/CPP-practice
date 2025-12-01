//
// Created by gasin on 10/30/2025.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v1 {1,20,3};

    auto it = v1.begin();

    cout<<(++it);
    //*it = 20;

    // vector<string> articles {"a", "an", "the"};
    // vector <int> v1 {10};
    // vector <int> v2 (5,10);
    //
    // string word;
    //
    // vector<string> text;
    //
    // while (cin>>word) {
    //     text.push_back(word);
    // }

    return 0;
}
