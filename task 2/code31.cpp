
#include <iostream>
using namespace std;

int main()
{
	cout << "enter a number followed by a character\n ";
	int num;
	char ch;
	cin >> num >> ch;
	for (int i = 1;i <= num;i++)
		cout << ch << " ";
}

