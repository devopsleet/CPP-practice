// Conditonal Operator
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    
//    int num {};
//    
//    cout<<"Enter an integer";
//    cin>>num;
//    
//    cout<<((num%2==0)?"Even":"odd");

    int scores [] {10,20,30};
    
    for(auto score: scores){
        cout<<score<<endl;
    }
    
    vector<double> temperatures {45.67,34.768};
    
    double avg_temp {};
    double total {};
    
    for(auto temp: temperatures)
        total += temp;
        
    if(temperatures.size()) {
        avg_temp = total/temperatures.size();
    }
    
    cout<<fixed<<setprecision(1);
    
    cout<<avg_temp<<endl;
    
    for (auto val: {1,2,3,4,5})
    {
        cout<<val;
        
    }
    
    for (auto c: "This is a test") {
        cout<<c;
    }

     return 0;
    
    
    
    
    
}