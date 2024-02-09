#include <iostream>
using namespace std;

int main()
{
    cout << "enter a number\n";
    int N;
    cin >> N;
    cout << "enter other five numbers\n";
    int n1, n2, n3, n4, n5;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    int count1=0;// how many numbers less than N
    int count2=0;// how many numbers larger than N
    int arr[5] = { n1,n2,n3,n4,n5 };
    for (int i = 0;i < 5;i++) {
        if (arr[i] < N)
            count1++;
        else
            count2++;
    }
    cout << "numbers less than N = " << count1 << "\n";
    cout << "numbers larger than N = " << count2 << "\n";
}

