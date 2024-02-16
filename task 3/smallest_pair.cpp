
#include <iostream>
using namespace std;
int main()
{
	int arr[200];
	cout << "enter the length of the array\n";
	int len, small_pair;
	cin >> len;
	cout << "enter the elements\n";
	for (int i = 0;i < len;i++) {
		cin >> arr[i];
	}
	int ref_value = arr[0] + arr[1] + 1;
	for (int i = 0;i < len;i++) {
		for (int j = i+1;j < len;j++) {
			if (i == 0 && j == 1)
				continue;
			small_pair = arr[i] + arr[j] + j - i;
			if (small_pair < ref_value)
				ref_value = small_pair;
		}
	}
	cout << "the smallest pair " << ref_value;
}

