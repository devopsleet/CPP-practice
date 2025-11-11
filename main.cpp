#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int reused = 42;

int main() {

    int iVal {10};

    int &refVal = iVal;

    int refVal2 {refVal};

    cout<<refVal2;

    return 0;
}
