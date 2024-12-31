#include<iostream>
using namespace std;

void batman ()
{
	string nama = "Sudrajat";
	string jk = "laki - laki";
	cout << nama << " adalah seorang " << jk << endl;
}

string catwoman ()
{
	string nama = "Diva";
	string jk = "perempuan";
	return (nama + " adalah seorang " + jk);
}

int main()
{
	batman();
	cout << catwoman() << endl;
}
