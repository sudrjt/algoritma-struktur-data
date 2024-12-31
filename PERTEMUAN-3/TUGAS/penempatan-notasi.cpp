#include<iostream> //untuk memasukkan header file iostream ke program ini

using namespace std; //agar tidak perlu mengetik std:: lagi di setiap awal perintah

int main() // fungsi utama dimana perintah berada
{
	// Inisialisasi Variabel
	int x=50; // deklarasi bahwa variabel x berisi angka 50
	int a, b, c, d, e; // deklarasi variabel a,b,c,d,e
	
	// proses
	a = x > 5 + 5; // x lebih besar dari 5 + 5
	b = x > 100; // x lebih besar dari 100
	c = a && b; // a dan(AND) b
	d = a || b; // a atau(OR) b
	e = !(e); // e tidak sama
	
	//output berupa 1 (benar) dan 0 (salah)
	cout<<"\nNilai a = x > 5 + 5 = "<<a<<endl; // benar karena nilai x lebih besar dari pada 5 + 5 = 10
	cout<<"\nNilai b = x > 100 = "<<b<<endl; // salah karena nilai x tidak lebih besar dari 100
	cout<<"\nNilai c = a && b = "<<c<<endl; // salah karena nilai a dan b tidaklah sama
	cout<<"\nNilai d = a || b = "<<d<<endl; // benar karena nilai a atau b tidak sama
	cout<<"\nNilai e = !(e) = "<<e<<endl; // salah karena nilai e tidak di lakukan proses apapun sehingga false
	getchar();
	
}
