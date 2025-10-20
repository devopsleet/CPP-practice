#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Function prototypes
void pass_by_value1(int num);

void pass_by_value2(string s);

void pass_by_value3(vector<string> v);

void print_vector(vector<string> v);


void pass_by_value1(int num) {
    num = 1000;
}


void pass_by_value2(string s) {
    s = "Singla";
}


void pass_by_value3(vector<string> v) {
    v.clear();
}

void print_vector(vector<string> v) {
    for (auto s: v) {
        cout << s << " ";
    }
    cout << endl;
}


int main() {
    int num{10};

    cout << "The value of num before calling pass_by_value1 is " << num << endl;
    pass_by_value1(num);
    cout << "The value of num after calling pass_by_value1 is " << num << endl;

    string s{"Gagan"};

    cout << "The string before calling function is " << s << endl;
    pass_by_value2(s);
    cout << "The string after calling function is " << s << endl;

    vector<string> v{"Moe", "Larry", "Curly"};

    pass_by_value3(v);
    cout << "The vector after calling function is ";
    print_vector(v);
}
