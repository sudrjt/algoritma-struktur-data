#include <iostream>
using namespace std;

main()
{
	cout << "Hello World" << endl;
	cout << "Sudrajat \tHengkel";
	cout << "\nTI-24-PA2" << endl;
	
	cout << "\n[-------------------------TIPE DATA-------------------------]" << endl;
	cout << "jika ukuran tipe data melebihi maksimum/minimum tipe data,\nmaka sistem akan membaca tipe data maksimum/minimum yang sistem tentukan" << endl;
	
//	integer
	cout << "\n[------Tipe Data Integer------]" << endl;
	int max_int = -2147483647;	// Maks	: -2147483647
	int min_int = 2147483647;	// Min	: 2147483647
	short max_short = 32768; // Maks	: 32767
	short min_short = -32767; // Min	: -32767
	long max_long = 2147483647; // Maks	: 2147483647
	long min_long = -2147483647; // Min 	: -2147483647
	long long max_longlong = 9223372036854775807; // Maks	: 9223372036854775807
	long long min_longlong = -9223372036854775807; // Min	: -9223372036854775807
	cout << "Maksimum Integer= " << max_int << endl;
	cout << "Minimum Integer= " << min_int << endl;
	cout << "Maksimum Short= " << max_short << endl;
	cout << "Minimum Short= " << min_short << endl;
	cout << "Maksimum Long= " << max_long << endl;
	cout << "Minimum Long= " << min_long << endl;
	cout << "Maksimum Long Long= " << max_longlong << endl;
	cout << "Minimum Long Long= " << min_longlong << endl;
	
//	float
	cout << "\n[------Tipe Data Float------]" << endl;
	float max_float = 3.4e+038; // Maks	: 3.4e+038
	float min_float = 3.4e-038; // Min	: 3.4e-038
	cout << "Maksimum Float= " << max_float << endl;
	cout << "Minimum Float= " << min_float << endl;
	
//	double
	cout << "\n[------Tipe Data Double------]" << endl;
	double max_double = 1.7e+308; // Maks	: 1.7e+308
	double min_double = 1.7e-308; // Min	: 1.7e-308
	cout << "Maksimum Double= " << max_double << endl;
	cout << "Minimum Double= " << min_double << endl;
	
	return 0;
}
