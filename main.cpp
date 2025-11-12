#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// void double_data(int *int_ptr) {
//     *int_ptr *= 2;
// }


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x{100}, y{200};

    cout << "Values before swapping ";
    cout << x << " " << y << endl;

    swap(&x, &y);

    cout << "Values after swap ";
    cout << x << " " << y << endl;
    // int value{10};
    //
    // int *int_ptr{nullptr};
    //
    // cout << "Value" << value << endl;
    // double_data(&value);
    // cout << "Value: " << value << endl;


    return 0;
}
