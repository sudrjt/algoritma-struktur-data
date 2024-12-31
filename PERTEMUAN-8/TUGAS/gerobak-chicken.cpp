#include <iostream>
using namespace std;

int main() {
    const int HARGA_DADA = 2500;
    const int HARGA_PAHA = 2000;
    const int HARGA_SAYAP = 1500;
    const double PAJAK = 0.10;

    int banyakJenis;

    cout << "GEROBAK FRIED CHICKEN\n";
    cout << "-------------------------------------\n";
    cout << "Kode   Jenis   Harga\n";
    cout << "-------------------------------------\n";
    cout << "D      Dada    Rp. 2500\n";
    cout << "P      Paha    Rp. 2000\n";
    cout << "S      Sayap   Rp. 1500\n";
    cout << "-------------------------------------\n";

    cout << "Masukkan banyak jenis: ";
    cin >> banyakJenis;

    char jenisPotong[banyakJenis];
    int jumlahPotong[banyakJenis];
    int hargaSatuan[banyakJenis];
    int totalHarga[banyakJenis];

    for (int i = 0; i < banyakJenis; ++i) {
    	cout << "\nJenis ke-" << i + 1;
        cout << "\nJenis Potong (D/P/S): ";
        cin >> jenisPotong[i];
        cout << "Jumlah Potong: ";
        cin >> jumlahPotong[i];

        switch (jenisPotong[i]) {
            case 'D':
            case 'd':
                hargaSatuan[i] = HARGA_DADA;
                break;
            case 'P':
            case 'p':
                hargaSatuan[i] = HARGA_PAHA;
                break;
            case 'S':
            case 's':
                hargaSatuan[i] = HARGA_SAYAP;
                break;
            default:
                cout << "Kode jenis potong tidak valid.\n";
                hargaSatuan[i] = 0;
        }

        totalHarga[i] = hargaSatuan[i] * jumlahPotong[i];
    }

    cout << "\nGEROBAK FRIED CHICKEN\n";
    cout << "--------------------------------------------------------\n";
    cout << "No.   Jenis   Harga Satuan   Banyak Beli   Jumlah Harga\n";
    cout << "--------------------------------------------------------\n";

    int grandTotal = 0;
    for (int i = 0; i < banyakJenis; ++i) {
        cout << (i + 1) << "      " << jenisPotong[i] << "        " << hargaSatuan[i] << "           " << jumlahPotong[i] << "       	     " << totalHarga[i] << "\n";
        grandTotal += totalHarga[i];
    }

    double pajak = grandTotal * PAJAK;
    double totalBayar = grandTotal + pajak;

	cout << "--------------------------------------------------------\n";
    cout << "Jumlah Bayar : Rp. " << grandTotal << "\n";
    cout << "Pajak 10%    : Rp. " << pajak << "\n";
    cout << "Total Bayar  : Rp. " << totalBayar << "\n";

    return 0;
}

