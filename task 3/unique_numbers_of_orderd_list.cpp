#include <iostream>
using namespace std;
int main()
{
	int arr[999];
	cout << "enter the length of the array\n";
	int len;
	cin >> len;
	cout << "enter the sorting elements \n";
	for (int i = 0;i < len;i++)
		cin >> arr[i];
	for (int i = 0;i < len;i++) {
		if (arr[i] == arr[i + 1])
			continue;
		cout << arr[i] << " ";
	}
}

