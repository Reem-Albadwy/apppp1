
#include <iostream>
using namespace std;

int main()
{
	int a = 1, b = 1, c;
	//c=2 a=1 b=2
	//c=3 a=2 b=3
	//c=5 a=3 b=5
	//c=8 a=5 b=8
	cout << (c = a + b, a = b, b = c,
		c = a + b, a = b, b = c,
		c = a + b, a = b, b = c,
		c = a + b, a = b, b = c) << "\n";
	// because of , operator ....just last one will be printed [8]
}

