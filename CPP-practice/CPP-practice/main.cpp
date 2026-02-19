// Conditonal Operator
#include <iostream>
#include <vector>
#include <iomanip>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
    
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};
    
    
    //cout<<first_name<<endl;
    cout<<"Enter your first name ";
    cin>>first_name;
    
    
    cout<<"Enter your last name ";
    cin>>last_name;
    
    cout<<"--------------------"<<endl;
    
    cout<<"Hello, "<<first_name<<" has " <<strlen(first_name) <<"  characters "<<endl;
    cout<<" and your last name has " <<strlen(last_name)<<" characters "<<endl;
    
    
    
    
}