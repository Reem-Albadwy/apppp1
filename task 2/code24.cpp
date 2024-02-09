

#include <iostream>
using namespace std;
int main()
{
    cout << "enter three numbers\n";
    int n1, n2, n3,temp;
     cin >> n1 >> n2>> n3;
     if (n2 < n1) {
         temp = n2;
         n2=n1;
         n1 = temp;
     }
     if (n3 < n2) {
         temp = n2;
         n2 = n3;
         n3 = temp;

     }
     if (n2 < n1) {
         temp = n2;
         n2 = n1;
         n1 = temp;
     }
     cout << n1 << " " << n2 << " " << n3 << "\n";





  

}

