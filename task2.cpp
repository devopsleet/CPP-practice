#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {

    char fullname[50];
    char temp[50];


    cout<<"Enter your fullname = ";
    cin.getline(fullname, 50);

    cout<<"Your full name is "<<fullname<<endl;

    cout<<"*******************************"<<endl;

    strcpy(temp, fullname);

    for (size_t i {0}; i < strlen(fullname); i++) {

        if (isalpha(fullname[i])) {
            fullname[i] = static_cast<char>(toupper(fullname[i]));
        }
    }

    cout<<"After upper case your full name is now "<<fullname<<endl;

    strcpy(temp, fullname);
    cout<<"The value oF temp is "<<temp<<endl;
    cout<<"The value of fullname is "<<fullname<<endl;

    cout<<((strcmp(temp, fullname) == 0) ?
            "Names Matched" :
            "Names does not match");




    return 0;
}
