#include <iostream>
using namespace std;
int len = 0;
void print(int n) {
	len++;
	if (n == 1) 
		return;
	if (n % 2 == 0)
		print(n / 2);
	else
		print(3 * n + 1);
	
}
int main()
{
	cout << "enter a num\n";
	int num; cin >> num;
	 print(num);
	cout << "the length " << len;
}

