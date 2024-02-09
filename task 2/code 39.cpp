

#include <iostream>
using namespace std;
int main()
{
	cout << "enter N and M to find its multicipation table\n";
	int N, M;
	cin >> N >> M;
	for (int i = 1;i <= N;i++) {
		for (int j = 1;j <= M;j++) {
			cout << i << " * " << j << " = " << i * j << "\n";
        }
	}
}

