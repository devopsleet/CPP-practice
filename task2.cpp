#include <iostream>
#include <climits>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    // vector<double> temp{45.6, 4354.7, 3434.8, 54656.9};
    //
    // double avg_temp{}, total{};
    //
    // for (auto t: temp)
    //     total += t;
    // cout<<fixed<<setprecision(2);
    // cout << ((temp.size()) ? to_string(total / temp.size()) : "temp size is zero") << endl;

    // Initializer list in the range based for loop

    int total{}, size{};

    for (auto temp: {1.2, 1.3, 1.7}) {
        total += temp;
        ++size;
    }
    cout<<total;
    cout << total / size << endl;

    return 0;
}
