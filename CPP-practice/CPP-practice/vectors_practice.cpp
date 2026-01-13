#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> v2;
    
    for (int i {0}; i < 10; i++){
        v2.push_back(i);
    }
    
    vector<int> v {1,2,3,4,5};
    
    for (auto &num:v) {
        num = num * num;
    }
    
    for(auto i : v){
        cout<<i<<endl;
    }
    

    return 0;
}