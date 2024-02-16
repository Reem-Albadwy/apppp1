#include <iostream>
using namespace std;
int main()
{
	int arr[900];
	cout << "enter the length of the array\n";
	int len, count = 1;
	cin >> len;
	cout << "enter the elements\n";
	for (int i = 0;i < len;i++)
		cin >> arr[i];
	int min = arr[0];
	for (int i = 1;i < len;i++) {
		if (arr[i] < min)
			min = arr[i];
	}
	cout << min << " ";
	min++;
	while(true){
		for (int j = 0;j < len;j++) {
			if (min == arr[j])
				cout << arr[j] << " ";
			count++;
		}
		min++;
		if (count == len)
			break;
		
	}
}

