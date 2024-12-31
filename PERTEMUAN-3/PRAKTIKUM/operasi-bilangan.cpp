#include <iostream>
using namespace std;

int main()
{
	//	Semua Operasi Bilangan
	cout << "\n[-------Semua Operasi Bilangan-------]" << endl;
	int x, y, tambah, kurang, kali, bagi;
	
	cout << "Masukkan bilangan ke satu : ";
	cin >> x;
	cout << "Masukkan bilangan ke dua : ";
	cin >> y;
	
	tambah = x + y;
	kurang = x - y;
	kali = x * y;
	bagi = x / y;
	
	cout << "====Hasil====" << endl;
	cout << "Hasil Pertambahan : " << tambah << endl;
	cout << "Hasil Pengurangan : " << kurang << endl;
	cout << "Hasil Perkalian : " << kali << endl;
	cout << "Hasil Pembagian : " << bagi << endl;
	
	return 0;
}
