#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char huruf[20];
	char pindah[20];
	//clrscr();
	
	cout<<"Masukkan  Sembarang Kata = ";
	cin >> huruf;
	
	cout<<"Panjang Kata Yang Diinputkan = ";
	cout<<strlen(huruf);
	
	getchar();
}
