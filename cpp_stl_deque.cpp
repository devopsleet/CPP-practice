// STL Deque
// Created by gasin on 12/10/2025.
//


#include <iostream>
#include <deque>

using namespace std;

int main() {

    deque<int> d {10,20,30};

    d.push_back(50);
    d.push_front(0);

    for (const auto &val:d) {
        cout<<val<<endl;
    }

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_back();
    d.pop_front();

    cout<<d[0]<<endl;


}