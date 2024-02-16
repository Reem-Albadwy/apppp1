
#include <iostream>
using namespace std;
int main()
{
	bool is_prime = 0;
	cout << "enter a number to check \n ";
		int n;
	cin >> n;

	for (int i = 2;i <= n;i++) {
		if (i == n) {
			is_prime = 1;
			continue;
		}
		if (n % i == 0) {
			is_prime = 0;
			break;
		}
	}
		if (is_prime == 1)
			cout << n << " " << "is prime\n";
		else
			cout << n << " " << "is not prime\n";
	
}

