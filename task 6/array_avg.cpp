#include <iostream>
using namespace std;
int i = 0;
int sum = 0;
double avg(int arr[], int len) {
    double average;
    if (len == 0)
        return 0;
    else {
        i++;
        sum += arr[len - 1];
        avg(arr, len - 1);
    }
    average = (double)sum / i;
    return average;
 }
int main()
{
    int arr[] = { 1,8,2,10,5 };
    double res = avg(arr, 5);
    cout << "the average of these elements " << res;
}

