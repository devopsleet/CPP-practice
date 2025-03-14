#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int count_vowels(string s) {
    int ans = 0;
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            ans++;
        }
    }
    return ans;
}

int main() {
    string str;
    cin >> str;
    cout << "The total number of vowels are " << count_vowels(str) << endl;


    return 0;
}
