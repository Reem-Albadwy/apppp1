#include <iostream>
using namespace std;
int main()
{
	int arr[200];
	int len;
	cout << "enter the length of the array\n";
	cin >> len;
	cout << "enter the elements of the arr\n";
	for (int i = 0;i < len;i++) {
		cin >> arr[i];
	}
	int min = arr[0], max = arr[0];
	for (int i = 0;i < len;i++) {
		if (arr[i] > max) 
			max = arr[i];
		else if (arr[i] < min) 
			min = arr[i];
	}
	for (int i = 0;i < len;i++) {
		if (arr[i] == min) 
			arr[i] = max;
		else if (arr[i] == max) 
			arr[i] = min;

		cout << arr[i] << " ";
	}

}

