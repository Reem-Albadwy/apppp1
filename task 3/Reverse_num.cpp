#include <iostream>
using namespace std;
int main()
{
	cout << "enter a number\n";
	int N;
	cin >> N;
	int rev_num = 0;
		while (N != 0) {
		int rev = N % 10;
		N /= 10;
		cout << rev;
		rev_num = rev_num * 10 + rev;
	}
	cout << "\n";
	cout << rev_num * 3;
}