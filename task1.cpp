#include <iostream>
#include <typeinfo>
#include<climits>

using namespace std;

int main() {
    cout<<"Signed int min "<<INT_MIN<<endl;
    cout<<"Signed int max "<<UINT_MAX<<endl;

    cout<<sizeof( unsigned long)<<endl;

    cout<<"Signed int min "<<LONG_MIN<<endl;
    cout<<"Signed int max "<<LONG_MAX<<endl;

    auto i = 020000000000;
    cout<<typeid(i).name()<<endl;

    int ans = UINT_MAX  + 1;
    cout<<ans;


    return 0;
}
