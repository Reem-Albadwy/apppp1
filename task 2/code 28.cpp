#include <iostream>
using namespace std;
int main()
{
	cout << "enter a number\n";
	int N;
	cin >> N;
	cout << "enter N numbers\n";
	int res, n;
	cin >> res; //first number
	for (int i = 1;i < N;i++) {
		cin >> n; if (n > res) res = n;
	}
	cout <<"the biggest number is "<< res << "\n";
}

