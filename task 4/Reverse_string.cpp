#include <iostream>
using namespace std;
void rev_str(const string& str) {
    string  reverse_one = str;
    for (int i = 0;i < (int)str.size();i++) {
        reverse_one[i] = str[(int)str.size() - i - 1];
    }
    for (int i = 0;i < (int)str.size();i++) {
        cout << reverse_one[i];
    }
}
int main()
{
    string str;
    cout << "enter the string to be reversed\n";
    cin >> str;
    cout << "the string after reversing ";
    rev_str(str);
}

