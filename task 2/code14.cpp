
#include <iostream>
using namespace std;

int main()
{
    cout << "enter number of boys,girls and teachers\n";
    int nb, ng, nt; //20 15 4
    cin >> nb >> ng >> nt;
    cout << (nb > 25) << "\n"; //0
    cout << (ng <= 30) << "\n"; //1
    cout << (nb > 20 && nt > 2 || ng > 30 && nt > 4) <<"\n"; //0
    cout << (nb < 60 || ng < 70) << "\n"; //1
    cout << (!(nb >= 60) && !(ng >= 70) )<< "\n"; //1
    cout << (nb == ng + 10) << "\n"; //0
    cout << (nb - ng >= 10 || nt > 5) << "\n"; //0
    cout << (nb == ng + 10 || ng == nb + 15) << "\n"; //0

    
}

  