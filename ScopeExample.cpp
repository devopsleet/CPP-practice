//
// Created by gasin on 10/28/2025.
//

#include <iostream>

using namespace  std;

void static_example() {

    static int num {5000};
    cout<<"Local static num is "<<num<<endl;
    num += 1000;
    cout<<"Local static num after adding 1000 is "<<num<<endl;

}

int main() {

    static_example();
    static_example();
    return 0;
}