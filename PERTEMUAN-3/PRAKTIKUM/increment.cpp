#include<iostream>
using namespace std;

int main()
{
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
	
	return 0;
}
