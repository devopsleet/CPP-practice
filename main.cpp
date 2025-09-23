#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int myGlobalNum;

int main() {

    string firstname = "Alice";
    string lastname = "Cooper";
    string name = firstname + " " + lastname;
    cout<<name<<endl;
    cout<<name.find("coop")<<endl;
    cout<<name.length()<<endl;
    cout<<name.substr(2,3)<<endl;
    return 0;
}

