

#include <iostream>
using namespace std;
int main()
{

	//first medium problem in selection H.W
	cout << "enter nums\n";
	int arr[10];
	for (int i = 0;i < 10;i++)
		cin >> arr[i];
	int max = arr[0];
	for (int i = 0;i < 10;i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	cout << "the max of these nums " << max << "\n";
}

