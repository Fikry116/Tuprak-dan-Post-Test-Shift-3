#include <iostream>
using namespace std;

int main() {
    bool s1 = false, s2 = false, s3 = false;
    int pilih;

	input_ulang:
	cout << "\nStatus: S1 = " << s1 << " S2 = " << s2 << " S3 = " << s3 << endl;
	cout << "Pilih Saklar (1-3) atau 0 untuk Keluar: ";
	cin >> pilih;

	switch (pilih) {
		case 0:
			return 0;
			break;
		case 1:
			s1 = !s1; 
			switch(s1) { //ngecek apakah saklar s1 nyala atau mati
				case true:
					cout << "Saklar 1 dinyalakan\n";
					break;
				case false:
					cout << "Saklar 1 dimatikan\n";
					break;
			}
			switch(s1 && s2 && s3) { //ngecek apakah ketiga saklar nyala, kalau ya, matikan saklar 2
				case true:
					s2 = false;
					cout << "dan matikan saklar 2\n";
					break;
			}
			break;
		case 2:
			s2 = !s2;
			if(s2) { //bisa pake if/switch. ngecek apakah saklar s2 nyala atau mati
				cout << "Saklar 2 dinyalakan\n";
			} else {
				cout << "Saklar 2 dimatikan\n";
			}
			if(s1 && s2 && s3) { //ngecek apakah ketiga saklar nyala, kalau ya, matikan saklar 1
				s3 = false;
				cout << "dan matikan saklar 1\n";
				break;
			}
			break;
		case 3:
			s3 = !s3;
			switch(s3) { //ngecek apakah saklar s2 nyala atau mati
				case true:
					cout << "Saklar 3 dinyalakan\n";
					break;
				case false:
					cout << "Saklar 3 dimatikan\n";
					break;
			}
			switch(s1 && s2 && s3) {//ngecek apakah ketiga saklar nyala, kalau ya, matikan saklar 1
				case true:
					s1 = false;
					cout << "dan matikan saklar 1\n";
					break;
			}
			break;
		default:
			cout << "Input invalid\n";
			break;
	}
	goto input_ulang; 
}
