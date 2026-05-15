#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x, fungsi;
    cout << "Masukkan nilai x: "; 
    cin >> x;

    if (x < -2) {
       fungsi = x*x - 5*x + 7;
    } else if (x >= -2 && x < 4) {  
       fungsi = cos(x) - 2*sin(2*x);
    } else {
       fungsi = pow(4*x, 1/3.0);
    }

    cout << "Nilai fungsi: " << fungsi;
    return 0;
}