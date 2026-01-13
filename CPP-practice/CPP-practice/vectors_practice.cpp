#include <iostream>
#include <vector>
#include <string>
using namespace std;

size_t find_char(const string &s, char c, size_t &occur) {
    
    auto ret = -1;
    occur = 0;
    for(size_t i {0}; i < s.size(); ++i) {
        if (s[i] == c) {
            if (ret == -1)
                ret = i;
            ++occur;
        }
           
            
    }
    
    
    return ret;
    
    
}

int main() {
    size_t ctr;
    int idx = find_char("Gagan", 'o', ctr);
    
    cout<<"The index value is " <<idx<<endl;
    cout<<"The number of occurences are "<<ctr<<endl;

    return 0;
}