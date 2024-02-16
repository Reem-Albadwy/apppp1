#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, count = 0;
	for (int a = 0;a <= 200;a++) {
		for (int b = 0;b <= 200;b++) {
			for (int c = 0;c <= 200;c++) {
				d = a + b - c;
				if (d >= 0 && d <= 200) //check the range rather than extra nested loop
					count++;
			}
		}
	}
	cout << count;
}
