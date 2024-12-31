#include <iostream>
using namespace std;

int main()
{
//	PENJUMLAHAN
	cout << "[----Nomor 1 = Penjumlahan----]" << endl;
	cout << "Masukkan dua angka.." << endl;
	
	int a, b, c;
	
	cout << "A = ";
	cin >> a;
	cout << "B = ";
	cin >> b;
	
	c = a + b;
	
	cout << "A + B = " << c << endl;
	cout << "Hasil dari A + B = " << c << endl;
	
//	PENGURANGAN
	cout << "\n[----Nomor 2 = Pengurangan----]" << endl;
	cout << "Masukkan dua angka.." << endl;
	
	int x, y, z;
	
	cout << "A = ";
	cin >> x;
	cout << "B = ";
	cin >> y;
	
	z = x - y;
	
	cout << "A - B = " << z << endl;
	cout << "Hasil dari A - B = " << z << endl;
	
//	PERKALIAN
	cout << "\n[----Nomor 3 = Perkalian----]" << endl;
	cout << "Masukkan dua angka.." << endl;
	
	int j, k, l;
	
	cout << "A = ";
	cin >> j;
	cout << "B = ";
	cin >> k;
	
	l = j * k;
	
	cout << "A * B = " << l << endl;
	cout << "Hasil dari A * B = " << l << endl;
	
	return 0;
}
