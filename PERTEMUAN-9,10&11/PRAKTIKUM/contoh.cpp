#include <iostream> 
using namespace std; 

void swap();

int main() { 
    int a = 20;
    int b = 50;

    cout << "Sebelum menukar nilai a: " << a << endl; 
    cout << "Sebelum menukar nilai b: " << b << endl; 

    swap(a, b); 
    cout << "----------------------------------" << endl;

    cout << "Setelah menukar nilai a: " << a << endl; 
    cout << "Setelah menukar nilai b: " << b << endl; 

    return 0;
}

