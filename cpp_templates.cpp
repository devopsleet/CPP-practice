// STL
// Created by gasin on 11/27/2025.
//

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    vector<int> v{12, 4343, 5, 6, 3, 54, 54};

    reverse(v.begin(), v.end());

    int sum {};

    sum = accumulate(v.begin(), v.end(), 2);

    cout<<sum<<endl;

    for (auto &elem: v) {
        cout << elem << endl;
    }


    return 0;
}
