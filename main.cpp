#include <iostream>
#include<iomanip>
using namespace std;

int count_str(string s) {
    int i = 0, ans = 0;

    while (s[i] != '\0') {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            ans++;
        }
        i++;
    }
    return ans;
}

int main() {
    int str;
    cin >> str;

    cout << count_str(str)<< endl;





    return 0;


}
