#include<iostream>
using namespace std;

int main()
{
int n, i, j;
	
	cout << "Input jumlah baris belah ketupat = ";
	cin >> n;
	cout << endl;
	
	for (i = 0; i < n; i++) {
		for (j = -n; j < n; j++) {
			if (-i <= j && j < i) {
				cout << "  ";
			} else {
				cout << "* ";
			}	
		}
	cout << endl;
	}
	
	for (i = 1; i <= n; i++) {
		for (j = -n; j < n; j++) {
			if (-(n - i) <= j && j < (n - i)) {
			cout << "  ";
			} else {
			cout << "* ";
			}
		}
	cout << endl;
	}
	return 0;
}
