#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x;

    if (x < -2) {
        cout << x*x - 5*x + 7 << endl;
    } else if (x >= -2 && x < 4) {  
        cout << cos(x) - 2*sin(2*x) << endl;
    } else {
        cout << pow(4*x, 1/3.0) << endl;
    }
    return 0;
}