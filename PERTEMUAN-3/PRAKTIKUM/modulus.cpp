#include<iostream>
using namespace std;

int main()
{
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
	
	return 0;
}
