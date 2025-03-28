#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

// long factorial(int n) {
//     if (n == 0) {
//         return 1;
//     }
//     else return n * factorial(n-1);
// }

// int count_vowels(string s) {
//     int ans = 0;
//     for (size_t i = 0; i < s.length(); i++) {
//         if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
//             ans++;
//         }
//     }
//     return ans;
// }

template <class T>

T Large(T n1, T n2) {
    return n1 > n2 ? n1 : n2;
}


int main() {

    char c1, c2;

    cin>> c1;
    cin>>c2;

    cout<<Large(c1,c2);

    // int n ;
    // cin >> n;
    // long result = factorial(n);
    //
    // cout << n << "!="<< result;

    // string str;
    //
    // int c = 0;
    // c--;
    // cout<<c;
    // cin >> str;
    // cout << "The total number of vowels are " << count_vowels(str) << endl;


    return 0;
}
