#include<iostream>
using namespace std;
// by tracing by hand
// this code will print the digits of the number from the right to the left
// after swapping the two required lines
// this code will print the digits of the number from the left to the right
void do_something1(int n) {	
	if (n) {
		cout << n % 10;
		do_something1(n / 10);
	}
}
int main() {
	do_something1(123456);
}

