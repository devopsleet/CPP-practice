#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int myGlobalNum;

int main() {

    char input;
    cin>>input;

    switch (input) {
        case 'a':
            cout<<"I am a"<<endl;
            break;
        case 'b':
            cout<<"I am b"<<endl;
        default:
            cout<<"I have no name"<<endl;

    }

    return 0;
}

