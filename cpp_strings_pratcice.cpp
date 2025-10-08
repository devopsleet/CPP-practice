//
// Created by gasin on 10/7/2025.
//

#include <iostream>
#include <string>
#define NL "\n"

using namespace std;

int main() {

    char s[] = "hello";

    s[0] = 'H';

    cout<<s<<endl;

    const char* ptr = "hello";

    ptr[0] = 'H';

    cout<<ptr<<endl;



    return 0;
}
