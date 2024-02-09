
#include <iostream>
using namespace std;
int main()
{
	int T, N, num, count = 0, sum = 0;
	cout << "enter the number of test cases\n";
	cin >> T;
	while (count < T) {
		cout << "enter N followed by N integers\n";
		cin >> N;
		for (int i = 1;i <= N;i++) {
			cin >> num;
			sum += (pow(num,i));
		}
		cout << sum << "\n";
		count++;
		sum = 0;
	}
}

