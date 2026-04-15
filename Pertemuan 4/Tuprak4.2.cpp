#include <iostream>
using namespace std;

int main() {
    bool s1 = false, s2 = false, s3 = false;
    int pilih;

	input_ulang:
	cout << "\nStatus: S1 = " << s1 << " S2 = " << s2 << " S3 = " << s3 << endl;
	cout << "Pilih Saklar (1-3) atau 0 untuk Keluar: "; cin >> pilih;

	switch (pilih) {
		case 0:
			cout << "Program Berhenti";
			return 0;
		case 1:
			s1 = !s1; //negasikan 
			if (s1) {
				cout << "Saklar 1 dinyalakan\n";
			} else {
				cout << "saklar 1 dimatikan\n";
			}
			break;
		case 2:
			s2 = !s2; //negasikan
			if (s2) {
				cout << "Saklar 2 dinyalakan\n";
			} else {
				cout << "saklar 2 dimatikan\n";
			}
			break;
		case 3:
			s3 = !s3; //negasikan
			if (s3) {
				cout << "Saklar 3 dinyalakan\n";
			} else {
				cout << "saklar 3 dimatikan\n";
			}
			break;
		default:
			cout << "Input invalid\n";
	}
	//kalau diliat-liat pas mengecek apakah ketiga saklar nyala itu cuma ngulang-ngulang tiap switch/if 
	//kayak di contoh Tuprak4.1. Biar codenya clean, bisa dikeluarkan dan dijadiin satu, Don't Repeat Yourself.
	//dan sebisa mungkin hindari nested if/switch yang berlebihan karena susah dibaca, kalau dirasa perlu pake aja.
	if (s1 && s2 && s3) {
		if (pilih == 1) {
			s2 = false; 
			cout << "dan matikan saklar 2\n";
		} else if(pilih == 2) {
			s3 = false; 
			cout << "dan matikan saklar 3\n";
		} else if(pilih == 3) {
			s1 = false; 
			cout << "dan matikan saklar 1\n";
		}
	}
	goto input_ulang; 
}