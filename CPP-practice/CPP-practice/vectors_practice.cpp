#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    
    string s("some string");
    
    if (s.begin() != s.end()) {
        auto it = s.begin();
        *it = toupper(*it);
    }
    
    for(auto it = s.begin(); !isspace(*it) && it!= s.end(); ++it) {
        *it = toupper(*it);
    }
    
    
    
    cout<<s<<endl;

    return 0;
}