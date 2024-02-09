

#include <iostream>
using namespace std;

int main()
{
    cout << "enter two numbers\n";
    int n1, n2;
    cin >> n1 >> n2;
    int n3 = n1 % n2;
    double res = (double)n3/ n2;
    cout << res<< "\n";
}

