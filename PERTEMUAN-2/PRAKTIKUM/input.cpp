#include <iostream>
using namespace std;

int main()
{
	//	Input
	cout << "\n[-------INPUT-------]" << endl;
	cout << "untuk input gunakan cin" << endl;
	
	char y[30], z[35], x[40];
	
	cout << "Masukkan NPM Anda: ";
	cin >> x;
	cout << "Masukkan Nama Anda: ";
	cin >> y;
	cout << "Masukkan Alamat Anda: ";
	cin >> z;
	
	cout << "NPM Anda Adalah: " << x << endl;
	cout << "Nama Anda Adalah: " << y << endl;
	cout << "Alamat Anda Adalah: " << z << endl;
	
	return 0;
}
