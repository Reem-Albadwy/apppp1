#include <iostream>
using namespace std;
int c = 0;
bool is_prime = false;
int count_primes(int start, int end,int i) {
	if (start == end + 1) //baseline
		return c;
	else {
		if (i == start && is_prime == true || start == 2) {
			c++;
			i = 2;
			start++;
			is_prime = false;
		}
		else if (start == 1 || start == 0)
		{
			start++;
			is_prime = false;
			i = 2;
		}
		else if (start % i != 0) {
			is_prime = true;
			i++;
		}
		else
		{
			start++;
			is_prime = false;
			i = 2;
		}
		count_primes(start, end, i);
	}
	return c;
}
int main()
{
int start, end;
 int i = 2;
 cout << "enter the start and the end\n";
 cin >> start >> end;
 int res = count_primes(start, end, i);
 cout << "the number of prime numbers between " << start << " and " << end<< " is " << res;
}

