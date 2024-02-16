#include <iostream>
using namespace std;
int main()
{
	int N [200];
	cout << "enter the length of the N array\n";
	int len1;
	cin >> len1;
	cout << "enter the elements\n";
	for (int i = 0;i < len1;i++)
		cin >> N[i];
	int Q [200];
	cout << "enter the length of the Q array\n";
	int len2;
	cin >> len2;
	cout << "enter the elements\n";
	for (int i = 0;i < len2;i++)
		cin >> Q[i];
	int last_occur;
	bool is_exist=0;
	for (int i = 0;i < len2;i++) {
		for (int j = 0;j < len1;j++) {
			if (Q[i] == N[j]) {
				last_occur = j;
				is_exist = 1;
			}
			
		}
		if (is_exist == 1)
			cout << "last occurence of " << Q[i] << " at index " << last_occur << "\n";
		else if (is_exist == 0)
			cout << "-1\n";
		is_exist = 0;
	}

}

