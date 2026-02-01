#include <iostream>

using namespace std;

int main() {
    
    int num{};
    
    const int lower {10};
    const int upper {20};
    
    cout<<boolalpha;
    
    cout<<"Enter the integer";
    cin>>num;
    
    bool within_bounds {false};
    
    within_bounds = (num > lower && num < upper);
    cout<<within_bounds;
    
    
    
    
    return 0;
    
}