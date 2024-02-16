


#include <iostream>
using namespace std;
int main()
{
	cout << "enter a num\n";
	int num;
	cin >> num;
	cout << "enter n strings\n";
	string str;
	for (int i = 1;i <= num;i++) {
		cin >> str;
		if (str == "no" || str == "NO" || str == "nO" || str == "No" || str == "on" || str == "ON" || str == "On" || str == "oN") {
			cout << str << " ";
		}
	}
}

