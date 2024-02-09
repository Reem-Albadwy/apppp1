
#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number\n";
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        for (int k = 1;k <= n - i;k++) {
            cout << " ";
        }
        for (int j = 1;j <= 2 * i - 1;j++) {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 1;i <= n;i++) {
        for (int k = 1;k <= i - 1;k++) {
            cout << " ";
        }
        for (int j = 1;j <= 2 * n + 1 - 2 * i;j++) {
            cout << "*";
        }
        cout << "\n";
    }

}