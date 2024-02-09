
#include <iostream>
using namespace std;

int main()
{
	cout << "enter a num\n";
	int num;
	cin >> num;
	cout << "number of years " << num / 360 << "\n";
	num %= 360;
	cout << "number of months " << num / 30 << "\n";
	num %= 30;
	cout << "number of days " << num << "\n";
}

