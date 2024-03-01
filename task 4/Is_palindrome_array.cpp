#include <iostream>
using namespace std;
bool is_palindrome(int arr[],int n) {
	bool palindrome;
	for (int i = 0;i < n/2;i++) {
		if (arr[i] == arr[n - i - 1])
			palindrome = true;
		else {
			palindrome = false;
			break;
		}
	}
	return palindrome;
}
int main()
{
	int arr[1000];
	cout << "enter the length of the array\n";
	int len;
	cin >> len;
	cout << "enter the elements of the arr\n";
	for (int i = 0;i < len;i++) 
		cin >> arr[i];
	bool res=is_palindrome(arr, len);
	if (res == true)
		cout << "yeah,palindrome array\n";
	else
		cout << "Not palindrome\n";
   
}

