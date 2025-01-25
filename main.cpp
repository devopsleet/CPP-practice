#include <iomanip>
#include <iostream>

using namespace std;

int globalNum;

int main() {
    const double pi = 3.141592653589793;
    int myNum;
    float myFloatNum;
    cout<<myNum<<endl;
    cout<<myFloatNum<<endl;
    string text = "Hello";
    cout<<text<<endl;
    cout<<globalNum<<endl;
    cout<< "without fixed " <<setprecision(2)<<pi<<endl;
    cout<< "with fixed " <<fixed <<setprecision(3)<<pi<<endl;
    return 0;
}