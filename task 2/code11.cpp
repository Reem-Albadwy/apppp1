
#include <iostream>
using namespace std;

int main()
{

	int a = 210;

	a /= 2; 
	cout << a << "\n"; //105

	cout << (a /= 3) << "\n"; //35
	cout << (a /= 5) << "\n"; //7
	cout << (a /= 7) << "\n"; //1

	cout << (2 + 3) * (5 - (-3)) / 5 / 8 << "\n"; //1

	a = 10;
	cout << a++ + 10 << "\n"; //20   a=11
	cout << ++a + 10 << "\n"; //22   a=12
	cout << a-- + 10 << "\n"; //22   a=11
	cout << --a + 10 << "\n"; //20   a=10

	int b = 20;
	cout << a++ + ++b << "\n";  //may be side effect !!

	cout << a << "\n";  //11
	++a += 10;	// side effect
	cout << a << "\n";
}




