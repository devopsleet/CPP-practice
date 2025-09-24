#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    long long result;

    if(n%2==0) {
        result = (n * (n+1)) /2;

        // for(int i=0; i<=n; i++) {
        //     result = result + i;
        // }

        cout<<result;

    }

    else {
        result = 1;
        int i = 1;
        while(i < n+1) {
            result = result * i;
            i += 1;
        }

        cout<<result<<endl;
    }






    return 0;
}