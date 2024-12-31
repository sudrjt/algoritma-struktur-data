#i	nclude<iostream>
using namespace std;

int main()
{
	const int baris = 2;
	const int kolom = 3;
	int nomor[baris][kolom] = {1, 4, 6, 2, 3, 5};
	
	for (int a = 0; a < baris; a++) {
		for (int b = 0; b < kolom; b++) {
			cout << nomor [a][b] << " ";
		}
		cout << endl;
	}
}
