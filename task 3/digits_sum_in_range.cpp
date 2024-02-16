#include <iostream>
using namespace std;
int main()
{
    cout << "enter a num\n";
    int N;
    cin >> N;
    cout << "enter A and B ..the range\n";
    int A, B;
    cin >> A >> B;
    int total_sum = 0;
    int digits_sum = 0;
    for (int i = 1;i <= N;i++) {
        int num = i;
        while (num != 0) {
            digits_sum += (num % 10);
           num /= 10;
        }
        if (digits_sum >= A && digits_sum <= B || digits_sum <= A && digits_sum >= B) //because A may be more than be or less
        {
            total_sum += i;
        }
         digits_sum = 0;
      }
    cout << "the sum of numbers in range " << total_sum;
}

