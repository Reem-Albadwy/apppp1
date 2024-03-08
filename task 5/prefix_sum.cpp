#include <iostream>
using namespace std;
int length = 5;
int sum = 0;
int i = 0;
int prefix_sum(int arr[], int len, int n) {
	if (i == n - 1)
		return 0;
	else {
		i = length - len;
		sum += arr[i];
		prefix_sum(arr, len - 1, n);
	}
	return sum;
}
int main()
{
	int arr[] = { 1,3,4,6,7 };
	cout << "enter the number of the elements u want sum\n";
	int n;  cin >> n;
	int res = prefix_sum(arr, length, n);
	cout << "the sum of the first " << n << " elements " << res;
}
