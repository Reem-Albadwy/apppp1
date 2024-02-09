

#include <iostream>
using namespace std;

int main()
{
	cout << "enter num\n";
	int num;
	cin >> num;
	int digit_1 = num % 10;
	num /= 10;
	int digit_2 = num % 10;
	num /= 10;
	int digit_3 = num % 10;
	num /= 10;
	cout << digit_1 + digit_2 + digit_3 << "\n";
}

