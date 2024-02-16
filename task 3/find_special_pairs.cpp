
#include <iostream>
using namespace std;
int main()
{
	int count = 0;
	for (int x = 50;x <= 300;x++) {
		for (int y = 70;y <= 400;y++) {
			if (x < y && (x + y) % 7 == 0)
				count++;
		}
	}
	cout << count;
}

