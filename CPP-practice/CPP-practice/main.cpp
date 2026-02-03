#include <iostream>

using namespace std;

int main() {
    
    
    enum Direction {
        left, right, up, down
    };
    
    Direction heading {down};
    
    switch(heading) {
        case left:
            cout<<"Going left"<<endl;
            break;
        case 1:
            cout<<"Right";
            break;
        case 2:
            cout<<"Up"<<endl;
            break;
        case 3:
            cout<<"Down"<<endl;
            break;
        
    }
    
    
    
    
    return 0;
    
}