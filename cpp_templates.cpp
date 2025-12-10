// STL
// Created by gasin on 11/27/2025.
//

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;


int main() {
    vector<vector<int> > matrix{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (const auto &row: matrix) {
        for (const auto &val: row) {
            cout << val << " ";
        }

        cout << endl;
    }

    vector<vector<int>>grid(3, vector<int>(4,0));

    for (const auto &r: grid) {
        for (const auto &c: r) {
            cout<<c<<" ";
        }
        cout<<endl;
    }
;
    return 0;
}
