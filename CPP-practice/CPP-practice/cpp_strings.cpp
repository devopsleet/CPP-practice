#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int x;
    
    cin>>x;
    
    string name;
    cin.ignore();
    getline(cin, name);
    
    cout<<name;
    
    return 0;
}