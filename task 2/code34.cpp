#include <iostream>
using namespace std;

int main()
{
	cout << "enter a num \n";
	int N ,sum_odd = 0, sum_even = 0;
	double av_odd, av_even;
	cin >> N;
	cout << "enter other numbers\n";
	int n;
	for (int i = 1;i <= N;i++) {
		cin >> n;
       if(i%2!=0)
			sum_odd += n;
		else if(i%2==0)
			sum_even +=n;
	}
	if (N % 2 == 0)
		av_odd =(double) sum_odd / (N / 2);
	else if (N % 2 != 0)
		av_odd = (double) sum_odd / (N / 2 + 1);
	av_even =(double) sum_even / (N / 2);
	cout << "avg of numbers in odd positions " << av_odd << "\n";
	cout << "avg of numbers in even positions " << av_even << "\n";
}
