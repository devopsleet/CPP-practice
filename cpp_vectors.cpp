//
// Created by gasin on 10/30/2025.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v;

    for (decltype(v.size()) x=0; x <10; ++x) {
        v.push_back(x);
    }

    cout<<v.size();



    // vector<unsigned int> clusters(11,0);
    //
    // unsigned grade;
    //
    // while (cin>>grade) {
    //     if (grade <=100) {
    //         ++clusters[grade/10];
    //     }
    // }



    // vector<int> v {1,2,3,4,5,6,7,8,9};
    //
    // for (auto &i:v) {
    //     i *= i;
    // }
    //
    // for (auto &i:v) {
    //     cout<<v<<endl;
    // }
    // vector<int> v1;
    //
    // for (size_t i{0}; i < 100; ++i) {
    //     v1.push_back(i);
    // }
    //
    // cout << v1.at(99);


    return 0;
}
