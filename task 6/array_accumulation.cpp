#include <iostream>
using namespace std;
int length = 5;
void accum(int arr[], int len) {
	int sum = 0, n=0;
	if (len == length) 
		len = -1;
	if (len == length-1) //base line
		return;
	else {
		n = len + 1;
		for (int i = 0;i < n;i++) {
			sum += arr[i];
		}
		int sub_res = arr[len + 1];
		sub_res += sum;
		cout << sub_res << " ";
		accum(arr, len + 1);
	}
}
int main()
{
	int arr[] = { 1,8,2,10,3 };
	//            1,9,11,21,24
	accum(arr, length);
}

