#include <iostream>
using namespace std;

int max(int arr[]) {
    int res = arr[0];
    for (int i = 0;i < 6;i++) {
        if (arr[i] > res)
            res = arr[i];
    }
    return res;
}
int main()
{
    int arr[6];
    cout << "enter the numbers to find the max of them\n";
    for (int i = 0;i < 6;i++)
        cin >> arr[i];
    cout << "The maximum num is " << max(arr) << "\n";
}

