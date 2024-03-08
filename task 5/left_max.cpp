#include <iostream>
using namespace std;
int length = 6;
void left_max(int arr[], int len) {
	 int maxx = arr[0];
	int sub_max, n = 0;
	if (len == length)
		len = -1;
	if (len == length - 1)
		return;
	else {
		n = len + 1;
      for (int i = 0;i <= n;i++) {
			if (maxx < arr[i])
				maxx = arr[i];
		}
		cout << maxx << " ";
		left_max(arr, n );
	}
}
int main()
{
	int arr[] = { 1,3,5,7,4,2 };
	left_max(arr, length);
   
}


