#include <iostream>
using namespace std;
int main()
{
	cout << "enter the length of the array\n";
	int L;
	cin >> L;
	cout << "enter the elements\n";
	int ref_num;//first element
	cin >> ref_num;
	int n;
	bool is_increasing = 0;
	for(int i = 2;i <= L;i++){
		cin >> n; 
		if (n > ref_num) {
			is_increasing = 1;
			ref_num = n;
		}
		else {
			is_increasing = 0;
			break;
		}
	}
	if (is_increasing == 1)
		cout << "yes..increasing array";
	else
		cout << "NO.. not increasing array\n";
}

