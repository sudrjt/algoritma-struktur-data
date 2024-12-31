#include <iostream> 
using namespace std; 
 
long int faktorial (int A) { 
	if (A==1) 
	return(A); 
	else 
	return (A*faktorial(A-1)); 
}
 
int main()
{ 
	int x,hasil; 
	cout<<"-----Program Rekursif untuk menghitung nilai faktorial-----"<<endl; 
    cout<<endl; 
    cout<<"Masukan Nilai = ";
    cin>>x; 
    hasil=faktorial(x); 
    cout<<"Hasil dari "<<x<<"! adalah "<<hasil<<endl; 
} 

