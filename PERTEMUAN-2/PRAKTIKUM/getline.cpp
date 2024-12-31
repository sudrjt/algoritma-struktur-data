#include <iostream>
#include <string> // Library untuk Getline

using namespace std;

int main()
{
	//	String Getline
	cout << "\n[-------String Getline-------]" << endl;
	cout << "getline agar bisa memakai space(blank)" << endl;
	
	string a, b, c;
	
	cout << "\nMasukkan NPM Anda: ";
	cin >> a;
	cin.ignore(); // cin.ignore fungsinya, jika ingin pakai getline harus pake cin.ignoe jika tidak line nya akan menyatu mirip fungsi endl
	cout << "Masukkan Nama Anda: ";
	getline(cin,b);
	cout << "Masukkan Alamat Anda: ";
	getline(cin,c);
	
	cout << "NPM Anda Adalah: " << a << endl;
	cout << "Nama Anda Adalah: " << b << endl;
	cout << "Alamat Anda Adalah: " << c << endl;
	
	return 0;
}
