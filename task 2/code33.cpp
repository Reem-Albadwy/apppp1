#include <iostream>
using namespace std;

int main()
{
	cout << "enter a num \n";
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < 6 - i;j++)
			cout << "*";
		cout << "\n";
	}
}

