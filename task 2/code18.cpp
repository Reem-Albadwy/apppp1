

#include <iostream>
using namespace std;

int main()
{
    cout << "enter num \n";
    int num;
    cin >> num;
    bool is_even1 = (num % 2 == 0);
    cout << is_even1 << "\n";
    bool is_even2 = ((double)num / 2 - num / 2 == 0);
    cout << is_even2 << "\n";
    int n = num % 10;// give us the last digit
    bool is_even3 = (n== 0|| n==2|| n==4|| n== 6||n==8);
    cout << is_even3 << "\n";
}

