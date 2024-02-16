#include <iostream>
using namespace std;
int main()
{
	cout << "enter the length of the main array\n";
	int N;
	cin >> N;
	int main_arr[200];
	cout << "enter the elements\n";
	for (int i = 0;i < N;i++)
		cin >> main_arr[i];
	cout << "enter the length of the sub array\n";
	int K;
	cin >> K;	
	int sum = 0;
	int max_sum = 0;
	int max_index=0;
	int a = K;
	for (int i = 0;i <= N-K;i++) {
		for (int j = i;j < a;j++) {
			sum += main_arr[j];
		}
		if (max_sum < sum) {
			max_sum = sum;
			max_index = i;
		}
		sum = 0;
		a++;
	}
	cout << "the indices of consecutive elements of maximum sum\n";
	for (int t = 0;t < K;t++) {
		cout << max_index << " ";
		max_index++;
	}
	cout << "\n";
	cout << "max sum " << max_sum;

}

