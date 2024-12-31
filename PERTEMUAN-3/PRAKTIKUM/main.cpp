#include <iostream>
using namespace std;

int main()
{
//	Modulus
	cout << "[-------Pertambahan-------]" << endl;
	int j;
	
	cout << "Masukan suatu Integer : ";
	cin >> j;
	
	j+=5;
	
	cout << "Hasil + 5 : " << j << endl;
	
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
	
//	Modulus
	cout << "\n[-------Modulus-------]" << endl;
	
	int a, b, c = 0, d = 0;
    // clrscr(); = seperti command clear di cmd prompt
	
	cout << "Masukkan Nilai A : "; cin >> a;
	cout << "Masukkan Nilai B : "; cin >> b;
	
	c = a % b;
	d = a * b;
	
	cout << "Hasil dari C = A % B = " << c << endl;
	cout << "Hasil dari D = A * B = " << d << endl;
	
//	Increment
	cout << "\n[-------Increment-------]" << endl;
	
	int q = 5;
	
	// Post-increment (a++): variabel 'a' digunakan dulu, baru ditambah 1
	int w = q++; // b = 5, a = 6
	
	cout << "Post-increment:" << endl;
	cout << "Nilai a setelah a++: " << q << endl; // a sekarang 6
	cout << "Nilai b: " << w << endl; // b mengambil nilai sebelum a ditambah, jadi b = 5
	
	int e = 5;
	
	// Pre-increment (++e): variabel 'e' ditambah dulu, baru digunakan
	int r = ++e; // c = 6, d = 6
	
	cout << "\nPre-increment: " << endl;
	cout << "Nilai C setelah ++c: " << e << endl; // c sekarang 6
	cout << "Nilai D: " << r << endl; // d mengambil nilai setelah a ditambah, jadi d = 6
	
//	Decrement
	cout << "\n[-------Decrement-------]" << endl;
	
	int f = 5;
	
	// Post-decrement (a--): variabel 'a' digunakan dulu, baru dikurang 1
	int g = f--; // b = 5, a = 4
	
	cout << "Post-decrement:" << endl;
	cout << "Nilai a setelah a--: " << f << endl; // a sekarang 4
	cout << "Nilai b: " << g << endl; // b mengambil nilai sebelum a dikurangi, jadi b = 5
	
	int u = 5;
	
	// Pre-decrement (--e): variabel 'e' dikurang dulu, baru digunakan
	int i = --u; // c = 4, d = 4
	
	cout << "\nPre-decrement: " << endl;
	cout << "Nilai C setelah --c: " << u << endl; // c sekarang 4
	cout << "Nilai D: " << i << endl; // d mengambil nilai setelah a dikurangi, jadi d = 4
	
	return 0;
}
