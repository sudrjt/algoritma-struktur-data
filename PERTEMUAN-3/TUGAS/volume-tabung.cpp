#include<iostream>
#define phi 3.14

using namespace std;

int main()
{
//	Volume tabung
	float jari_jari, tinggi, volume;
	
	cout<<"Masukkan Jari-Jari Tabung = ";
	cin>>jari_jari;
	cout<<"Masukkan Tinggi Tabung = ";
	cin>>tinggi;
	
	volume=phi*jari_jari*jari_jari*tinggi;
	
	cout<<"\nDiketahui volume tabung : \nJari-jari 	= "<< jari_jari << endl;
	cout<<"Phi		= "<< phi << endl;
	cout<<"V		= Phi x r x r x t"<< endl;
	cout<<"V		= " << phi << " x " << jari_jari << " x " << jari_jari << " x " << tinggi << endl;
	cout<<"V		= " << volume << " cm" << endl;
	cout<<"Volume tabung dengan jari-jari " << jari_jari << " cm dan tinggi " << tinggi << " cm" << " adalah = " << volume << " cm";
	
	getchar();
}
