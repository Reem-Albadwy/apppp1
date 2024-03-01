#include <iostream>
using namespace std;
bool is_prime(int num) {
	if (num == 2)
		return true;
	if (num == 0 || num == 1)
		return false;
	for (int i = 2;i < num;i++) {
		if (num % i == 0) 
			return false;
	}
		return true;
}
int nth_prime(int count) {
	for (int i = 2; ;i++) {
		if (is_prime(i))
			count--;
		if (count == 0)
			return i;
	}
}
int main()
{
	for (int j = 1;j <= 25;j++) {
		int res = nth_prime(j);
		cout << res << " ";
	}
}

