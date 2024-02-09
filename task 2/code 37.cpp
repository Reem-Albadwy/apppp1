

#include <iostream>
using namespace std;
int main()
{
	cout << "enter a num\n";
	int n;
	cin >> n;
	int i = 1, count = 0;
	while (true) {
		if (i % 3 == 0 && i % 4 != 0) {
			cout << i << " ";
			count++;
		}
		if (count == n)
			break;
		i++;
	}
}

