#include <iostream>
using namespace std;

float luasPersegi(float sisi) {
    return sisi * sisi;
}

float luasPersegiPanjang(float panjang, float lebar) {
    return panjang * lebar;
}

float luasTabung(float radius, float tinggi) {
    const float PI = 3.14159;
    return 2 * PI * radius * (radius + tinggi);
}

float volumeTabung(float radius, float tinggi) {
    const float PI = 3.14159;
    return PI * radius * radius * tinggi;
}

int main() {
    int pilihan;
    do {
        cout << "\nPilih perhitungan: " << endl;
        cout << "1. Luas Persegi" << endl;
        cout << "2. Luas Persegi Panjang" << endl;
        cout << "3. Luas Tabung" << endl;
        cout << "4. Volume Tabung" << endl;
        cout << "0. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                float sisi;
                cout << "Masukkan panjang sisi persegi: ";
                cin >> sisi;
                cout << "Luas Persegi: " << luasPersegi(sisi) << endl;
                break;
            }
            case 2: {
                float panjang, lebar;
                cout << "Masukkan panjang: ";
                cin >> panjang;
                cout << "Masukkan lebar: ";
                cin >> lebar;
                cout << "Luas Persegi Panjang: " << luasPersegiPanjang(panjang, lebar) << endl;
                break;
            }
            case 3: {
                float radius, tinggi;
                cout << "Masukkan jari-jari tabung: ";
                cin >> radius;
                cout << "Masukkan tinggi tabung: ";
                cin >> tinggi;
                cout << "Luas Permukaan Tabung: " << luasTabung(radius, tinggi) << endl;
                break;
            }
            case 4: {
                float radius, tinggi;
                cout << "Masukkan jari-jari tabung: ";
                cin >> radius;
                cout << "Masukkan tinggi tabung: ";
                cin >> tinggi;
                cout << "Volume Tabung: " << volumeTabung(radius, tinggi) << endl;
                break;
            }
            case 0:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 0);

    return 0;
}

