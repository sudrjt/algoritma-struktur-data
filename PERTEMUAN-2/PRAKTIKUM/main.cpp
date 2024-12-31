#include <iostream>
#include <string> // Library untuk getline
using namespace std;

int main(){
	
//	Konstanta
	cout << "[-------KONSTANTA-------]" << endl;
	cout << "Konstanta/Const bilangan sifatnya tetap" << endl;
	cout << "Unsigned = Hanya bilangan positif(Positive Only) 0 - 999999" << endl;
	
//	Integer	
	int i;
	i = 6;
	cout << "\nNilai I adalah:" << i;
	
//	Float
	float f = 1.5;
	cout << "\nBentuk bilangan desimal 6/4 adalah:" << f << endl;
	
//	double
	double d;
	d = 12.4567;
	cout << "Nilai D:" << d << endl;
	
//	Input
	cout <<"\n[-------INPUT-------]" << endl;
	
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
	
//	String Getline
	cout <<"\n[-------String Getline-------]" << endl;

	string a, b, c;
	
	cout << "Masukkan NPM Anda: ";
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
