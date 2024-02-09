

#include <iostream>
using namespace std;

int main()
{
    cout << "enter five numbers\n";
    double n1, n2, n3, n4, n5;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    cout << "the ave of these nums " << (n1 + n2 + n3 + n4 + n5) / 5 << "\n";
   //B
    double res1 = (n1 + n2 + n3) / (n4 + n5);
    cout << "res1 is " << res1 << "\n";
    double av1= (n1 + n2 + n3) / 3;
    double av2=(n4 + n5) / 2;
    //C
    double res2 = av1 / av2;
    cout << "res2 is " <<res2<< "\n";
    cout << "math relation between res1 and res2 is " << "res1 = " << res1 / res2 << " * res2\n";


}

