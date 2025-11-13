#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

// void double_data(int *int_ptr) {
//     *int_ptr *= 2;
// }


// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

void display(const vector<string> *v) {
    //(*v).at(0) = "Funny";
    for (const auto &stooge: *v) {
        cout << stooge << " ";
    }

   // (*v).at(0) = "Funny";
}

int main() {

    unsigned int x = -1;
    cout<<x<<endl;
    //
    // unsigned n = 11;
    //
    // while ( n > 0) {
    //     --n;
    //     cout<<n<<endl;
    // }

    // unsigned int x = -2;  // Maximum value for a 32-bit signed int
    // std::cout << "x before overflow: " << x << std::endl;
    //
    // x = x + 1;        // Overflow occurs here!
    // std::cout << "x after overflow: " << x << std::endl;
    //
    // x = x - 2;        // Further arithmetic
    // std::cout << "x after subtracting 2: " << x << std::endl;
    // vector<string> stooges{"Larry", "Moe", "Curly"};
    // display(&stooges);

    // const double *temp_ptr;
    //
    // double high {100};
    // cout<<fixed<<setprecision(5)<<high<<endl;
    // double low {67};
    //
    // temp_ptr = &high;
    //
    // cout<<*temp_ptr<<endl;
    //
    // temp_ptr = &low;
    //
    // cout<<*temp_ptr<<endl;

    // int x{100}, y{200};
    //
    // cout << "Values before swapping ";
    // cout << x << " " << y << endl;
    //
    // swap(&x, &y);
    //
    // cout << "Values after swap ";
    // cout << x << " " << y << endl;
    // int value{10};
    //
    // int *int_ptr{nullptr};
    //
    // cout << "Value" << value << endl;
    // double_data(&value);
    // cout << "Value: " << value << endl;


    return 0;
}
