#include<iostream>
using namespace std;

int main()
{
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
