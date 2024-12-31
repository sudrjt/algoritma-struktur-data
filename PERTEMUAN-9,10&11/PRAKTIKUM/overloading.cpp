#include <iostream>
using namespace std;

void word (string *h)
{
	cout <<"==========================";
	cout << "\nAlamat : " << h ;
	cout << "\nKata : " << *h;
	
}

int main ()
{
	string h;
	
	cout << "Masukkan kata : ";
	cin >> h;
	word (&h);
	
}
