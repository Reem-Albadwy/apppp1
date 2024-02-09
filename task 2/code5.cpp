
#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "enter two numbers\n";
    cin >> n1 >> n2;
    cout << "before swapping " <<n1<<" " << n2 << "\n";
    int temp=n1;
    n1 = n2;
    n2 = temp;
    cout << "after swapping " << n1 << " " << n2 << "\n";
}

