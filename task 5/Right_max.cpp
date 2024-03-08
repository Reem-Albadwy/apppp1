#include <iostream>
using namespace std;
int length = 6;
int maxx;
int newarr[6];
int i = 5;
void right_max(int arr[], int len) {
	if (len == 0)
		return;
	else {
		int sub_max = arr[len - 1];
		if (sub_max > maxx)
			maxx = sub_max;
		newarr[i] = maxx;
		i--;
		right_max(arr, len - 1);
	}

}
int main()
{   
	int arr[] = { 13,5,11,9,-4,0 };
	maxx = arr[length - 1];
	right_max(arr, length);
	for (int j = 0;j < 6;j++)
		cout << newarr[j] << " ";
}

