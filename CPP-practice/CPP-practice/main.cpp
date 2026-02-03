#include <iostream>

using namespace std;

int main() {
    
    char letter_grade{};
    
    cout<<"Enter the letter grade you expect on the exam ";
    cin>>letter_grade;
    
    switch(letter_grade) {
        case 'a':
        case 'A':
            cout<<"You need 90 or above"<<endl;
            break;
        case 'b':
        case 'B':
            cout<<"You need 80-89"<<endl;
            break;
        case 'c':
        case 'C':
            cout<<"You need 70-79"<<endl;
            break;
        case 'd':
        case 'D':
            cout<<"You should study hard"<<endl;
            break;
        case 'f':
        case 'F':
        {
            char confirm{};
            
            cout<<"Are you sure?";
            cin>>confirm;
            
            if (confirm == 'y' || confirm == 'Y')
                cout<<"OK";
            else if (confirm == 'n' || confirm == 'N')
                cout<<"Good";
            else
                cout<<"Failed";
            break;
        }
        default:
            cout<<"Sorry, not a valid grade"<<endl;
    }
    
    
    
    
    return 0;
    
}