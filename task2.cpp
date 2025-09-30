#include <iostream>
#include <climits>

using namespace std;



int main() {

    const int rows {3};
    const int cols {4};

    int movies_ratings [rows][cols] {
        {1,2,3,4},
        {1,23,4,5},
        {1,2,3,4}
    };

    cout<<movies_ratings[0][5];

    return 0;
}
