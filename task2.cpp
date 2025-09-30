#include <iostream>
#include <climits>

using namespace std;



int main() {

    char vowels [] {'a', 'e', 'i', 'o', 'u'};

    cout<<"My first vowel is "<<vowels[0]<<endl;
    cout<<"My last vowel is "<<vowels[4]<<endl;

    // cin>>vowels[5]; // out of bounds
    // cout<<vowels[5]; // out of bounds

    int test_scores [5] {10,23,45};

    cout<<test_scores[0]<<endl;
    cout<<test_scores[1]<<endl;
    cout<<test_scores[2]<<endl;
    cout<<test_scores[3]<<endl;
    cout<<test_scores[4];

    return 0;
}
