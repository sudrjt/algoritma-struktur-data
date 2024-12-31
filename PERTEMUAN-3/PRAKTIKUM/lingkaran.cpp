#include<iostream>
#define phi 3.14152965

using namespace std;

int main()
{
	cout << "[=======Lingkaran=======]" << endl;

	float jari_jari, tinggi, volume, luas;
	
	cout << "\nMasukkan jari jari lingkaran : ";
	cin >> jari_jari;
	cout << "Masukkan tinggi tabung : ";
	cin >> tinggi;
	
	volume = phi*jari_jari*jari_jari*tinggi;
	luas = 2*phi*jari_jari*tinggi;
	
	cout << "Volume Tabung : " << volume << endl;
	cout << "Luas Tabung : " << luas << endl;
	
	getchar();
}
