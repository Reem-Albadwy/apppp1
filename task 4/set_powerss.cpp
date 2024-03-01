#include <iostream>
using namespace std;
void set_powers(int len, int m ) {
	int arr[1000];
	for (int i = 0;i < len;i++)
		arr[i] = pow(m, i);
	for (int i = 0;i < len;i++)
		cout << arr[i] << " ";
}
int main()
{
	cout << "enter the length of the arr and the base \n";
	int length; cin >> length;
	int base;  cin >> base;
	set_powers(length, base);
}