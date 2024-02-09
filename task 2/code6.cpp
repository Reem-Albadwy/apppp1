

#include <iostream>
using namespace std;
int main()
{
	int A, B;
	cout << "enter value of A and B\n";
	cin >> A >> B;
	if (B != 1 && B != -1)
		cout << "b should be 1 or -1 ,please enter another value\n";
	cin >> B;
		if (B == 1) 
			cout << A * A << "\n";
		else if (B == -1) 
			cout << 2 * A + 1 << "\n";

	}




	
