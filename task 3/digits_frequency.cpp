#include <iostream>
using namespace std;
int main()
{
	cout << "enter the length of the array\n";
	int len;
	cin >> len;
	cout << "enter the elements\n";
	int freq[10] = { 0 };
	int num;
	int count = 1;
		cin >> num;
		while (true) {
			for (int i = 0;i <= 9;i++) {
				freq[num % 10]++;
					num /= 10;
					if (num == 0)
						break;
			}
			if (count == len)
				break;
              if (num == 0) {
				cout << "enter another element ";
				cin >> num;
				count++;
			}
		}
	    for (int i = 0;i <= 9;i++) 
			cout << i << " exists " << freq[i] << " times \n";
		}

