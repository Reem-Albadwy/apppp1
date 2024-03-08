#include <iostream>
using namespace std;
int sum = 0;
int i = 1;
int length = 5;
int suffix_sum(int arr[], int len, int n) {
	if (i == n + 1)
		return 0;
	else {
		sum += arr[len - 1];
		i++;
		suffix_sum(arr, len - 1, n);
	}
	return sum;
}
int main()
{
	int arr[] = { 1,-3,4,10,7 };
	cout << "enter the number of elements u want summ\n";
	int n;  cin >> n;
	int res = suffix_sum(arr, length, n);
	cout << "the sum of the last " << n << " elements " << res;
}


