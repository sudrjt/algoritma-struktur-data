#include <iostream>
using namespace std;

//// --------------------------------------------1
//string siswa (string nama, string kelas) //Fungsi dengan parameter formal "nama" dan "kelas"
//    {
//   	    return (nama + " adalah siswa kelas " + kelas); 
//    }
//
//int main ()
//{
//	string nama, kelas;
//	cout << "Nama : "; getline(cin,nama);
//	cout << "Kelas : "; getline(cin,kelas);
//	cout<< siswa (nama,kelas); // Memanggil fungsi dengan parameter aktual "nama" dan "kelas"
//	
// 	cout << endl << siswa("Rhainy", "TI-23-PA2"); // Memanggil fungsi dengan nilai langsung	
//}














//// -----------------------------------------2
//bool lulus(int nilai)
//{
//	if (nilai > 75 ){
//		return true;
//	} else {
//		return false;
//	}
//}
//
//void data_siswa (string nama, int nilai){
//	lulus (nilai);
//	cout << "Nama : "<< nama << endl;
//	cout << "Nilai : "<< nilai << endl;
//	cout <<"Status : ";
//	
//	if (lulus(nilai)) {
//		cout << "Lulus" << endl;
//	} else {
//		cout<< "Tidak lulus" <<endl;
//	}
//}
//
//int main ()
//{
//	string nama;
//	int nilai;
//	
//	cout << "Masukkan Nama : "; 
//	getline(cin,nama);
//	cout <<"Masukkan Nilai : "; 
//	cin  >> nilai;
//	cout<<endl;
//	
//	data_siswa(nama,nilai);
//	
//}


// -----------------------------------------------------------3
//void garis(){
//	cout << "==========================================";
//
//}
//
//int main ()
//{
//	garis ();
//	cout <<"\n\t\tHelena" <<endl;
//	garis ();
//	getchar();
//}


// -----------------------------------------------------------4
int kali (int a, int b){
	cout << a * b;
}

int main ()
{
	int hasil, a, b;
	cout<<"Masukkan nilai a = ";
	cin>>a,
	cout<<"Masukkan nilai b = ";
	cin>>b;
	
	hasil = kali (a,b);
	cout <<"Hasil perkalian = " << hasil << endl;
	getchar ();
}

