#include<iostream>

using namespace std;

int main() {
    
    int counter {10};
    int result {0};
    
    cout<<"Counter "<<counter<<endl;
    
    ++counter;
    counter++;
    
    cout<<counter<<endl;
    
    counter = 10;
    result = 0;
    
    result = ++counter;
    cout<<counter<<endl;
    cout<<result<<endl;
    
    counter = 10;
    result = 0;
    
    result = counter++;
    cout<<counter<<endl;
    cout<<result<<endl;
    
    return 0;
    
}