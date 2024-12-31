#include<iostream>
#include<string>

using namespace std;

int main()
{
	string nama_siswa;
	int nilai1, nilai2, nilai3, rata_rata;
	
	cout<<"Nama Siswa : ";
	cin>>nama_siswa;
	cout<<"Nilai Pertandingan I : ";
	cin>>nilai1;
	cout<<"Nilai Pertandingan II : ";
	cin>>nilai2;
	cout<<"Nilai Pertandingan III : ";
	cin>>nilai3;
	 
	rata_rata=(nilai1+nilai2+nilai3)/3;
	
	cout<<"Siswa yang bernama "<<nama_siswa<<endl;
	cout<<"Memperoleh nilai rata-rata "<<rata_rata<<" dari hasil perlombaan yang diikutinya" << endl;
	cout<<"Hadiah yang di dapat adalah ";
	if(rata_rata >= 85){
		cout<<"Komputer Core i5";
	}
	else {
		if(rata_rata >= 70){
			cout<<"Uang sebesar Rp.2.500.000,00";
		}
		else{
			cout<<"Hadiah Hiburan";
		}
	}
	
	getchar();
}
