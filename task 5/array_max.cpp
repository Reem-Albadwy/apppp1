#include <iostream>
using namespace std;
int maxx;
int array_max(int arr[], int len) {
	int sub_max ;
	if (len == 1) // base line
		sub_max = arr[0]; 
	else {
		sub_max = arr[len - 1];
		if (sub_max > maxx)
			maxx = sub_max;
		array_max(arr, len - 1);
		return maxx;
	}
}
int main()
{
    int arr[] = { 1,0,9,12,-3,15 };
	maxx = arr[0];
	int res = array_max(arr, 6);
	cout << "the maximum between these elements " << res;
}

