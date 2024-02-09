
#include <iostream>
using namespace std;

int main()
{// 3rd problem easy selection H.W
 //I solved this problem by this way but it doesn't work in all cases i don't know whyy
  
    cout << "enter three numbers\n";
    int n1, n2, n3, temp;
    cin >> n1 >> n2 >> n3;
    if (n2 < n1) {   
        temp = n2;
        n2 = n1;
        n1 = temp;
    }
    if (n3 < n2) {
        n2 = n3;
        temp = n2;
        n3 = temp;
    }
    if (n2 < n1) {
        temp = n2;
        n2 = n1;
        n1 = temp;
    }
    if (n3 < 100)
        cout << n3;
    else if (n2 < 100)
        cout << n2;
    else if (n1 < 100)
        cout << n1;
    else
        cout << "-1\n";
}
    

