#include <iostream>
#include <string>
#include <vector>

using namespace std;
//Function prototypes
void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value(vector<string> v);
void print_vector(vector<string> v);


void pass_by_value1(int num) {
    num = 1000;
}


int main() {

    int num {10};

    cout<<"The value of num before calling pass_by_value1 is "<< num<<endl;
    pass_by_value1(num);
    cout<<"The value of num after calling pass_by_value1 is " <<num<<endl;
}