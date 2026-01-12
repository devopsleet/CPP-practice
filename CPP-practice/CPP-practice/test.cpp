#include <iostream>
#include <string>
using namespace std;




int main() {

    string line;
    
    while(getline(cin,line)){
        break;
    }
    
    for (auto &c: line)
       c= toupper(c);
        
    cout<<"String in Uppercase is "<<line<<endl;
        
        
    
    
    
    return 0;
}