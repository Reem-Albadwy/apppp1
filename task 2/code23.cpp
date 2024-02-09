

#include <iostream>
using namespace std;
int main()
{
    cout << "enter two numbers\n";
    int n1, n2;
    cin >> n1 >> n2;
    if (n1 % 2 != 0 && n2 % 2 != 0)
        cout << n1 * n2 << "\n";
    else if (n1 % 2 == 0 && n2 % 2 == 0)
        cout << n1 / n2 << "\n";
    else if (n1 % 2 != 0 && n2 % 2 == 0)
        cout << n1 + n2 << "\n";
    else if (n1 % 2 == 0 && n2 % 2 != 0)
        cout << n1 - n2 << "\n";

}

