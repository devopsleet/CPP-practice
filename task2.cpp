#include <iostream>

using namespace std;

int main() {

    int n;

    cin>>n;

    int result = 0, temp=n;

    while (temp!=0) {
        result = result + temp%10;
        temp = temp/10;
    }

    cout<<result<<endl;

    return 0;
}