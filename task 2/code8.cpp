
#include <iostream>
using namespace std;
int main()
{
	int n1, n2, n3;
	cout << "enter three numbers\n";
	cin >> n1 >> n2 >> n3;
	int temp = n3;
	n3 = n1;
	n1 = n2;
	n2 = temp;
	cout << n1 << " " << n2 << " " << n3 << "\n";

}

