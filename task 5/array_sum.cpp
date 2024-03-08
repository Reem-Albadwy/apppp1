#include <iostream>
using namespace std;
int arr_sum(int arr[], int len) {
	if (len == 1)
		return arr[0] ;  //base line
	else
	 return  arr_sum(arr, len - 1) + arr[len - 1];
}
int main()
{
	int arr[] = { 1,5,8,9,-1,3 };
	int sum = arr_sum(arr, 6);
	cout << "the sum of the elements of this array " << sum;
}

