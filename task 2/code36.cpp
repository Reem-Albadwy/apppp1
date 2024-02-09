
#include <iostream>
using namespace std;

int main()
{
	cout << "enter a num\n";
	int n;
	cin >> n;
	for (int i = 0;i <= n;i++) {
		if (i % 8 == 0 || (i % 3 == 0 && i % 4 == 0)) {
			cout << i << " ";
		}
	}
}

