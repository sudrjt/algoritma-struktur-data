#include<iostream>
using namespace std;

int main()
{
	int hasil[3][3];
	
	
	for(int a = 0; a < 3; a++) {
		for(int b = 0; b < 3; b++) {
			cout<<"Data "<<a<<" - "<<b<<" =";
			cout<<"\nJumlah Penjumlahan = ";
			cin>>hasil[a][b];
		}
	}
	
	cout<<"\nHASIL PENJUALAN BARANG";
	cout<<"\n===============================";
	cout<<"\n2001	|	2002	|	2003	|";
	cout<<"\n===============================";
	cout<<endl;
	
		for(int a = 0; a < 3; a++){
			for(int b = 0; b < 3; b++){
				cout<<hasil[a][b]<<"	|\t";
			}
			cout<<endl;
		}
		
		return 0;
}
