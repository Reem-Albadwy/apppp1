

#include <iostream>
using namespace std;
int main()
{
	cout << "enter the number of test cases\n";
	int T,N,num,min;
	cin >> T;
	for (int i = 1;i <= T;i++) {
		cout << "enter N followed by N integers\n";
		cin >> N; 
			for (int j = 1;j <= N;j++) {
				cin >> num; 
				if (j == 1) {
					min = num;
					continue;
				}
				if (num < min) min = num;
			}
			cout <<"the min of this collection of nums "<< min << "\n";
		}
	}

