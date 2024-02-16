
#include <iostream>
using namespace std;
int main()
{
	cout << "enter a number\n";
	int n;
	cin >> n;
	bool is_prime = 0;
	for (int i = 2;i <= n;i++) {
		if (i == 2) {
			cout << "2";
		  }
		for (int j = 2;j < i;j++) {
			if (i % j != 0) 
				is_prime = 1;
			else {
				is_prime = 0;
				break;
			}
			   }  
		if (is_prime == 1)
			cout << "," << i;
		 }
		   }

