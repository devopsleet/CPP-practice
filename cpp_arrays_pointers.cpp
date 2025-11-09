// Array and Poiters
// Created by gasin on 11/9/2025.
//

#include <iostream>

using namespace std;

int main() {

    size_t size{0};

    cout<<"Enter the size of array ";
    cin>>size;

    auto ptr = new int[size];

    cout<<"Insert the values in array"<<endl;

    for (size_t i{0}; i < size; i++)
        *(ptr+i) = 10 + i;

    cout<<*(ptr + 4);

    delete[] ptr;
    ptr = nullptr;

    return 0;
}