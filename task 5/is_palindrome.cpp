#include <iostream>
using namespace std;
int length = 6;
int i;
bool is_palindrome;
bool palindrome(int arr[], int len) {
	if (len == length / 2) //base line
		return is_palindrome;
	else {
		int sub_res = arr[len - 1];
		if (arr[i] == sub_res)
			is_palindrome = true;
		else {
			is_palindrome = false;
			return is_palindrome;
		}
		i++;
		palindrome(arr, len - 1);
	}
	
}
int main()
{
	int arr1[] = { 1,2,4,4,2,1 };
	int arr2[] = { 1,7,0,9,7,1 };
	is_palindrome = false;
	i = 0;
	bool res1 = palindrome(arr1, 6);
	is_palindrome = false;
	i = 0;
	bool res2 = palindrome(arr2, 6);
	cout << "the palindrome of array1 " << res1 << "\n";
	cout << "the palindrome of array2 " << res2 << "\n";
}

