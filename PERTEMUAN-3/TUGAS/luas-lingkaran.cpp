#include<iostream>
#define phi 3.14

using namespace std;

int main()
{
//	LUAS LINGKARANG
	float jari_jari, luas;
	
	cout<<"Masukkan Jari-Jari Lingkaran = ";
	cin>>jari_jari;
	
	luas=phi*jari_jari;
	
	cout<<"\nDiketahui luas lingkaran : \nJari-jari 	= "<< jari_jari << endl;
	cout<<"Phi		= "<< phi << endl;
	cout<<"L		= Phi x r x r"<< endl;
	cout<<"L		= " << phi << " x " << jari_jari << " x " << jari_jari << endl;
	cout<<"L		= " << luas << " cm" << endl;
	cout<<"Luas lingkaran dengan jari-jari "<< jari_jari << " cm adalah = " << luas << "cm";
	
	getchar();
} 
