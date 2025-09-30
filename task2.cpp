#include <iostream>
#include <climits>

using namespace std;



int main() {

    char vowels [] {'a', 'e', 'i', 'o', 'u'};

    cout<<"My first vowel is "<<vowels[0]<<endl;
    cout<<"My last vowel is "<<vowels[4]<<endl;

    cin>>vowels[5]; // out of bounds
    cout<<vowels[5]; // out of bounds

    return 0;
}
