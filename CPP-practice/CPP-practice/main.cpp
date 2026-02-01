#include <iostream>

using namespace std;

int main() {
    
    bool equal_result {false};
    bool not_equal_result {false};
    
    
    int num1{}, num2{};
    
    cout<<"Enter two integers separated by space = ";
    cin>>num1>>num2;
    
    equal_result = (num1 == num2);
    
    cout<<boolalpha;
    cout<<equal_result;
    
    char char1{}, char2{};
    
    cout<<"Enter two characters";
    cin>>char1>>char2;
    
    equal_result = (char1 == char2);
    cout<<equal_result;
    
    
    
    return 0;
    
}