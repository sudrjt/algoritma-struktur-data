#include<iostream>
using namespace std;

int main()
{
	int panjang, u1, u2, u;
	u1=0;
	u2=1;
	
	cout<<"Masukkan panjang deret : ";
	cin>>panjang;
	
	for (int a=0; a<panjang; a++) {
    	cout <<u1<<" ";
    	u=u1+u2;
    	u1=u2;
    	u2=u;
	}
	
	return 0;
}
