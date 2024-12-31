#include <iostream>
#include <conio.h> // Agar bisa memakai getch()
#define harga 4500.02 // Define variable

using namespace std;

int main()
{
	float jumlah, total;
	
	cout << "Masukkan jumlah barang = ";
	cin >> jumlah;
	
	total = harga * jumlah;
	
	cout << "\nYang harus dibayar = " << total;
	
	getch();
}
