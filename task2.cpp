#include <iostream>
#include <climits>
#include <iomanip>
#include <vector>
using namespace std;

int main() {

    char letter_grade {};

    cout<<"Enter the letter grade you expect on the exam";
    cin>>letter_grade;

    switch (letter_grade) {
        case 'a':
        case 'A':
            cout<<" My letter is"<<letter_grade<<endl;
            break;
        default:
            cout<<"No grade"<<endl;
            break;

    }


    return 0;
}
