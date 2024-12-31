#include <iostream>
using namespace std;

void passByValue(int num) {
    num = 10; 
}

void passByReference(int &num) {
    num = 10; 
}

int main() {
    int a = 5;
    int b = 5;

    passByValue(a);
    cout << "Setelah passByValue, a = " << a << endl; 

    passByReference(b);
    cout << "Setelah passByReference, b = " << b << endl; 

    return 0;
}

