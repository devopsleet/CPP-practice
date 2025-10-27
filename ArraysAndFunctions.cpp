//
// Created by gasin on 10/27/2025.
//

#include <iostream>

using namespace std;

void print_array(const int [], size_t);

void set_array(int [], size_t, int);


void print_array(const int arr[], size_t size) {
    for (size_t i{0}; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr[0]= 5000;
}

void set_array(int arr[], size_t size, int val) {
    for (size_t i{0}; i < size; i++)
        arr[i] = val;
}

int main() {
    int arr[]{100, 98, 96, 94, 92};

    print_array(arr, 5);
    set_array(arr, 5, 10);
    print_array(arr,5);
    print_array(arr,1);

    return 0;
}
