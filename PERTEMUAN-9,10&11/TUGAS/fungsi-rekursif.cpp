#include <iostream>
using namespace std;

int hitungPangkat(int x, int y) {
    if (y == 0) {
        return 1;
    } else {
        return x * hitungPangkat(x, y - 1);
    }
}

int main() {
    int x, y;
    cout << "MENGHITUNG PANGKAT DENGAN FUNGSI REKURSIF" << endl;
    cout << "\nMasukan Nilai X = ";
    cin >> x;
    cout << "Masukan Nilai Y = ";
    cin >> y;

    int hasil = hitungPangkat(x, y);
    cout << "\n" << x << " Dipangkatkan " << y << " = " << hasil << endl;

    return 0;
}

