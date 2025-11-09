// Simple pointers
// Created by gasin on 11/8/2025.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int score{100};

    int *score_ptr{&score};

    cout << *score_ptr << endl;

    *score_ptr = 200;

    cout << score << endl;


    vector<string> stooges {"Larry", "Moe", "Curly"};

    vector<string> *vector_ptr {nullptr};

    cout<<stooges.at(0)<<endl;

    vector_ptr = &stooges;

    cout<<"vector elemet at 0 index "<<(*vector_ptr).at(0)<<endl;

    for (const auto &stooge : *vector_ptr) {
        cout<<stooge<<endl;
    }

    return 0;
}
