#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float a, b, c, x1, diskriminan;

	cout << "Program menentukan akar dari persamaan ax^2 + bx + c = 0\n\n";
	cout << "Masukkan nilai a: ";
	cin >> a;
	if(a == 0) {
		cout << "Ga bisa difaktorisasi\n";
	} else {

        
        cout << "Masukkan nilai b: ";
        cin >> b;
        
        cout << "Masukkan nilai c: ";
        cin >> c;
        
        diskriminan = b*b - 4*a*c;
        
        if(diskriminan == 0) {
            x1 = -b/(2.0*a);
            cout << "Akar Kembar dengan faktorisasi: ";
            if(x1 >= 0 ) {
                cout << a << "(x - " << abs(x1) << ")^2\n";
            } else {
                cout << a << "(x + " << abs(x1) << ")^2\n";
            }
        } else if(diskriminan > 0) {
            cout << "Akar rill berbeda";
        } else {
            cout << "Akar imajiner";
        }
        return 0;
    }
}