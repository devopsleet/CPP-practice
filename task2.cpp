#include <iostream>
#include <climits>
#include <iomanip>
#include <vector>
#include <cstring>

using namespace std;

int main() {

    //char lastname[5];
    char firstname[10] {}, lastname[5];

    cout<<"Enter your first name";
    cin>>firstname;

    cout<<"Enter your last name";
    cin>>lastname;

    cout<<static_cast<int>(firstname[0])<<endl;;
    cout<<firstname[1]<<endl;
    //
     char fullname[20] {};
    //
    strcpy(fullname, firstname);
    cout<<firstname<<endl;
    cout<<fullname<<endl;
    // strcat(fullname, " ");
    // strcpy(fullname, lastname);
    //
    // cout<<fullname;

    return 0;
}
