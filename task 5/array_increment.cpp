#include <iostream>
using namespace std;
int i = 0;
void arr_increment(int arr[], int len) {
	if (len == 5)
	len = -1;
	if (len == 3)
		cout << arr[4] + i;
	else {
		cout << arr[len + 1] + i << " ";
		i++;
		arr_increment(arr, len + 1);
	}
}
int main()
{
	int arr[] = { 1,8,2,10,3 };
	arr_increment(arr, 5);
}

