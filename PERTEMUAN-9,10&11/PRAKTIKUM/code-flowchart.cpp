#include <iostream>
using namespace std;

struct Name {
    char name[20];
};

struct Roll {
    char status[20];
};

struct Student {
    struct Name info;
    struct Roll roll;
} data;

int main() {
    cout << "Masukkan Nama Mahasiswa: ";
    cin >> data.info.name;
    cout << "Masukkan Status Mahasiswa: ";
    cin >> data.roll.status;

    cout << "\n\n---Data Store Completed---\n\n";
    cout << "Name: " << data.info.name << "\nStatus: " << data.roll.status;

    return 0;
}

