#include <iostream>

using namespace std;

int fact(int val) {
    
    int res = 1;
    
    while (val > 1)
        res = res * val--;
    
    return res;
}


int main() {
    
    int j = fact(5);
    cout<<"5! is "<<j<<endl;
        
    
    
    
    return 0;
}