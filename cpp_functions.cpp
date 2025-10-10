//
// Created by gasin on 10/10/2025.
//

#include <iostream>
#include <cmath>
#include <cstdlib> // required for rand()
#include <ctime>

using namespace std;

int main() {

    int random_number {};
    size_t count {10};
    int min {1};
    int max {6};

    cout<<"The max value of Random max on my system is "<<RAND_MAX<<endl;
    srand(time(nullptr));

    for (size_t i {1}; i <= count; ++i) {
        random_number = rand() % max + min;
        cout<<random_number<<endl;
    }

    return 0;

}
