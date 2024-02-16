#include <iostream>
using namespace std;
int main()
{
	int arr[1000];
	int count = 1;
	cout << "enter the length of the array\n";
	int len;
	cin >> len;
	cout << "enter the elements\n";
	for (int i = 0;i < len;i++)
		cin >> arr[i];
	int min = arr[0];
	cout << "the three min values ";
	for (int i = 1;i < len;i++) {
		if (arr[i] < min)
			min = arr[i];
	}
	cout << min<<" ";
		
	while(true){
		min++;
		for (int i = 0;i < len;i++) {
			if (min == arr[i]) { //check if it exist in the array
				cout << min << " ";
				count++;
			}
		}
		if (count == 3)
			break;
	}
}

