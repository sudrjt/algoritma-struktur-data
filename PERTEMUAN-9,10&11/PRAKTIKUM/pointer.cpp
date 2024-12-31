//Implementation of Pointer Dereference
#include <iostream>
using namespace std;

//int main ()
//{
//	int ilham, amir, *raka;
//	ilham = 75;
//	amir = ilham;
//	raka = &ilham;
//	cout << "Nilai Ilham = "<<ilham<<endl;
//	cout << "Nilai Amir = "<<amir<<endl;
//	cout << "Nilai Raka = "<<*raka<<endl;
//	getchar();
//}


//=====================================
////Implementation of Pointer Reference 
//int main ()
//{
//	int ilham, *raka, rafli;
//	ilham = 75;
//	raka = &ilham;
//	rafli = *raka;
//	cout << "Nilai Ilham :"<<ilham<<endl;
//	cout <<"Nilai Raka : "<<raka<<endl;
//	cout << "Nilai Rafli : "<<rafli<<endl;
//	getchar();
//}


//======================================
//Implementation of Changing a Value by Pointer 
//int main ()
//{
//	int yofrie = 93;
//	int *hadiansyah;
//	//clrscr():
//	cout << "Nilai awal yofrie = "<<yofrie<<endl;
//	hadiansyah = &yofrie;
//	cout <<"Nilai hadiansyah sekarang = "<< *hadiansyah <<endl;
//	*hadiansyah = 50;
//	cout <<"Nilai hadiansyah sekarang = "<< *hadiansyah <<endl;
//	getchar();
//}



//======================================
/* Implementation of Pointer to Pointer */
//int main ()
//{
//	int ilham;
//	int *raka;
//	int **amir;
//	int ***agus;
//	//clrscr():
//	ilham = 75;
//	cout << "Nilai Ilham = "<<ilham<<endl;
//	raka = &ilham;
//	amir = &raka;
//	agus = &amir;
//	
//	
//	cout << "Nilai Raka Hasil Mengakses Ilham = "<<*raka<<endl;
//	cout << "nilai Amir Hasil Mengakses Ilham = "<<**amir<<endl;
//	cout << "nilai Agus Hasil Mengakses Ilham = "<<***agus<<endl;
//	getchar ();
//}



//======================================
// Implementation of Pointer in Array 
//int main ()
//{
//	int i;
//	int nilai [5];
//	int *ptrnilai;
//	ptrnilai = nilai;
//
//	for (i = 1; i <= 5; i++) {
//		cout << "Masukkan Nilai Elemen ke - "<<i<< " = ";
//		cin >> nilai[i];
//	}
//
//	cout << endl;
//	cout << "Hasil Pengaksesan Elemen Array Lewat Pointer";
//	cout << endl << endl;
//	
//	for (i = 1; i <= 5; i++) {
//		cout << "Elemen "<<i<<". Nilai : "<<nilai[i];
//		cout << ", Menempati Alamat Memori : " << &ptrnilai[i];
//		cout << endl;
//	}
//	getchar();
//}



//======================================
// Implementation of Pointer in String 
int main ()
{
	char bandMetal[] = "SEPULTURA";
	char *bandPunk = "RANCID";
	
	cout << "Nama Band Metal : " << bandMetal <<endl;
	cout << "Nama Band Punk : " << bandPunk;
	bandPunk += 3; //menambah nilai penunjuk / pointer
	cout << "\nNama Band Metal : " << bandMetal <<endl;
	cout << "Nama Band Punk : " << bandPunk;
	getchar();
}



