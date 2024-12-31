#include <iostream>
using namespace std;

void cekGanjilGenap(int* angka) {
	
    if (*angka % 2 == 0) {
        cout << *angka << " adalah bilangan Genap." << endl;
    } else {
        cout << *angka << " adalah bilangan Ganjil." << endl;
    }
}

int main() {
    int bilangan;
    cout << "Masukkan bilangan: ";
    cin >> bilangan;

    cekGanjilGenap(&bilangan);

    return 0;
}

