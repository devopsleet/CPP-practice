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


int reused = 42;

int main() {
    auto reused = 10;

    cout << reused << endl;

    cout << ::reused << endl;


    return 0;
}
