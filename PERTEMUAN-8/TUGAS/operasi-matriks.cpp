#include <iostream>
using namespace std;

int main() {
    int rowsA, colsA, rowsB, colsB, choice;

    cout << "Masukkan jumlah baris matriks A: ";
    cin >> rowsA;
    cout << "Masukkan jumlah kolom matriks A: ";
    cin >> colsA;
    cout << "Masukkan jumlah baris matriks B: ";
    cin >> rowsB;
    cout << "Masukkan jumlah kolom matriks B: ";
    cin >> colsB;

    int A[rowsA][colsA], B[rowsB][colsB], C[rowsA][colsB];

    cout << "Masukkan elemen-elemen matriks A:\n";
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
        	cout << "[" << i << "]" "[" << j << "] : ";
            cin >> A[i][j];
        }
    }

    cout << "Masukkan elemen-elemen matriks B:\n";
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
        	cout << "[" << i << "]" "[" << j << "] : ";
            cin >> B[i][j];
        }
    }

    cout << "\nPilih operasi:\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "Pilihan: ";
    cin >> choice;

    if (choice == 1) {
        if (rowsA == rowsB && colsA == colsB) {
            cout << "\nHasil Penjumlahan Matriks:\n";
            for (int i = 0; i < rowsA; i++) {
                for (int j = 0; j < colsA; j++) {
                    cout << A[i][j] + B[i][j] << " ";
                }
                cout << endl;
            }
        } else {
            cout << "\nPenjumlahan tidak dapat dilakukan karena ukuran matriks tidak sama.\n";
        }
    } else if (choice == 2) {
        if (rowsA == rowsB && colsA == colsB) {
            cout << "\nHasil Pengurangan Matriks:\n";
            for (int i = 0; i < rowsA; i++) {
                for (int j = 0; j < colsA; j++) {
                    cout << A[i][j] - B[i][j] << " ";
                }
                cout << endl;
            }
        } else {
            cout << "\nPengurangan tidak dapat dilakukan karena ukuran matriks tidak sama.\n";
        }
    } else if (choice == 3) {
        if (colsA == rowsB) {
            cout << "\nHasil Perkalian Matriks:\n";
            for (int i = 0; i < rowsA; i++) {
                for (int j = 0; j < colsB; j++) {
                    C[i][j] = 0;
                    for (int k = 0; k < colsA; k++) {
                        C[i][j] += A[i][k] * B[k][j];
                    }
                    cout << C[i][j] << " ";
                }
                cout << endl;
            }
        } else {
            cout << "\nPerkalian tidak dapat dilakukan karena jumlah kolom matriks A tidak sama dengan jumlah baris matriks B.\n";
        }
    } else {
        cout << "\nPilihan tidak valid.\n";
    }

    return 0;
}


