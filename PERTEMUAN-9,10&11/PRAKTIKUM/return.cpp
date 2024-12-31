#include <iostream> 
#include <stdio.h> 
using namespace std; 

int kali (int a, int b)  
{ 
	return a * b;
} 
 
int main() 
{ 
    int hasil, a, b; 
    cout << "Masukan nilai a = "; cin >> a;  
    cout << "Masukan nilai b = "; cin >> b;   
 
    hasil = kali (a, b);  
    cout << "Hasil perkalian = " << hasil << endl;   
    getchar(); 
}
