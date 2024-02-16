
#include <iostream>
using namespace std;
int main()
{
	int arr[1000];
	bool is_palindrome;
	cout << "enter the length of the array\n";
	int len;
	cin >> len;
	cout << "enter the elements\n";
	for (int i = 0;i < len;i++) 
		cin >> arr[i];
	for (int i = 0;i < len/2;i++) {
		if (arr[i] == arr[len - i - 1])
			is_palindrome = 1;
		else
			is_palindrome = 0;
	}
	if(is_palindrome == 1)
		cout << "yeah..it is palindrome";
	else if (is_palindrome == 0) 
		cout << "No ..is not palindrome";
}

