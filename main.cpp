#include<iostream>

using namespace std;

template <class T>
class Calculator {
private:
    T s1, s2;

public:
    Calculator(T s1, T s2) {
        this->s1 = s1;
        this->s2 = s2;
    }

    T concatenate() {
        return s1 + s2;
    }
};

int main() {
    Calculator<string> calculator("Hi", "Hello");
    cout<<calculator.concatenate()<<endl;

    return 0;
}