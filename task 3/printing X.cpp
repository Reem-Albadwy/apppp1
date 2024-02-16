#include <iostream>
using namespace std;
int main()
{
	cout << "enter a num\n";
	int n;
	cin >> n;
	for (int i = 1;i <= n / 2;i++) {
		cout << "*";
		for (int k = 1;k <= n - 2 * i;k++) {
			cout << " ";
		}
		cout << "*\n";
		for (int j = 1;j <= i;j++) {
			cout << " ";
		}
	}
	cout << "*\n";
	for (int i = 1;i <= n / 2;i++) {
		for (int j = 1;j <= n / 2 - i;j++) {
			cout << " ";
		}
		cout << "*";
		for (int k = 1;k <=2*i-1;k++) {
			cout << " ";
		}
		cout << "*\n";
	}
	
}
