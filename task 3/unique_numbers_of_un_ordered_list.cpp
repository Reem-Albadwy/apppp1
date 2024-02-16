#include <iostream>
using namespace std;
int main()
{
	cout << "enter the length of the array\n";
	int len;
	cin >> len;
	cout << "enter the elements\n";
	int arr[901];
	int freq[501] = { 0 };
	for (int i = 0;i < len;i++)
		cin >> arr[i];
	for (int i = 0;i < len;i++) {
		if (arr[i] == arr[i + 1])
			continue;
		else if (freq[arr[i]] == 0) {
			cout << arr[i] << " ";
			freq[arr[i]]++;
		}
	}
}