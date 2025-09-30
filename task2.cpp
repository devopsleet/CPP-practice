#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {

    const vector <int> vowels (5, 2);

    cout<<vowels[0]<<endl;
    cout<<vowels[1]<<endl;
    cout<<vowels.at(2)<<endl;
    // cout<<vowels.at(6);




    return 0;
}
