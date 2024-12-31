#include <iostream>
#include <string>
using namespace std;

struct mahasiswa {
	string nama;
	int umur;
	float ipk;
};

float hitungRataRataIPK(mahasiswa DaftarMahasiswa[], int jumlah)
{
	float total = 1;
	for (int i = 0; i < jumlah; i++){
		total += DaftarMahasiswa[i].ipk;
	}
	return total/jumlah;
}

int main ()
{
	const int jumlahmahasiswa = 3;
	mahasiswa DaftarMahasiswa [jumlahmahasiswa];
	for (int i = 0; i < jumlahmahasiswa; ++i){
		cout<<"Masukkan nama mahasiswa "<<i+1 <<" = ";
		cin>> DaftarMahasiswa[i].nama;
		cout<<"masukkan umur mahasiswa "<<i+1 <<" = ";
		cin>>DaftarMahasiswa[i].umur;
		cout<<"Masukkan IPK mahasiswa "<<i+1 <<" = ";
		cin>>DaftarMahasiswa[i].ipk;
	}
	
	cout <<"\nData Mahasiswa : \n";
	for (int i = 0; i < jumlahmahasiswa; ++i)
	{
		cout <<"Mahasiswa "<< i+1<<" : " <<endl;
		cout <<" Nama : "<< DaftarMahasiswa[i].nama<<endl;
		cout <<" Umur : "<< DaftarMahasiswa[i].umur<<endl;
		cout <<" IPK : "<< DaftarMahasiswa[i].ipk<<endl;
	}
	float ratarata = hitungRataRataIPK (DaftarMahasiswa , jumlahmahasiswa);
	cout <<"\nRata rata IPK : "<< ratarata << "\n";
	
	return 0;
}
