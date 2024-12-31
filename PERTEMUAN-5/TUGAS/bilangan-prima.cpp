#include<iostream>
using namespace std;

int main()
{
	int input;
    bool isPrime = true;

    cout << "Masukkan bilangan bulat: ";
    cin >> input;

    if (input <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= input/2; i++) {
            if (input % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    
    if (isPrime) {
        cout << "Termasuk bilangan PRIMA" << endl;
    } else {
        cout << "Bukan termasuk bilangan PRIMA" << endl;
    }

    return 0;
}
