// Conditonal Operator
#include <iostream>

using namespace std;

int main() {
    
//    int num {};
//    
//    cout<<"Enter an integer";
//    cin>>num;
//    
//    cout<<((num%2==0)?"Even":"odd");
    

    
    int num1{}, num2{};
    
    cout<<"Enter two integers ";
    cin>>num1>>num2;
    
    if (num1 != num2) {
        cout<<"Largest "<<((num1>num2)? num1: num2)<<endl;
        cout<<"Smallest "<<((num1 < num2)? num1: num2);
    }
    else
        cout<<"Both the numbers are same";
    
     return 0;
    
    
    
    
    
}