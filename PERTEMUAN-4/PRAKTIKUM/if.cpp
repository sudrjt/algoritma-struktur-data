#include<iostream>

using namespace std;

int main()
{
	double total_beli, potongan=0, jum_bayar=0;
	
	cout<<"Total Pembelian Rp. ";
	cin>>total_beli;
	if(total_beli >= 50000) {
		potongan = 0.2*total_beli;
		cout<<"Besar Potongan Rp. "<< potongan<<endl;
	}
	jum_bayar=total_beli-potongan;
	cout<<"Jumlah yang harus dibayarkan Rp. "<<jum_bayar;
	getchar();
}
