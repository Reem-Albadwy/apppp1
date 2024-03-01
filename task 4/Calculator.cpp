#include <iostream>
using namespace std;
int done = 0;
void readnums(double& n1, double& n2) {
    cout << "enter two nums to be calculated\n";
    cin >> n1 >> n2;
}
void sum(double num1, double num2) {
    cout << num1 << "+" << num2 << "=" << num1 + num2 << "\n";
    done++;
}
void sub(double num1, double num2) {
    cout << num1 << "-" << num2 << "=" << num1 - num2 << "\n";
    done++;
}
void mul(double num1, double num2) {
    cout << num1 << "*" << num2 << "=" << num1 * num2 << "\n";
    done++;
}
void div(double num1, double num2) {
    if (num2 == 0)
        cout << "cant be divided by zero\n";
    else {
        cout << num1 << "/" << num2 << "=" << num1 / num2 << "\n";
        done++;
    }
}
void exit() {
    cout << "the number of done operations " << done << "\n";
}
int menu() {
    cout << "enter ur choice\n";
    cout << "1 for sum\n";
    cout << "2 for sub\n";
    cout << "3 for mul\n";
    cout << "4 for div\n";-
    cout << "5 for exit\n";
    int choice; cin >> choice;
    return choice;

}
int main()
{
    double n1, n2;
    int res;
    readnums(n1, n2);
    while (done >= 0) {
        res= menu();
        if (res > 5 || res < 1) {
            cout << "invalid choice\n";
            continue;
        }
        if (res == 1)
            sum(n1, n2);
        if (res == 2)
            sub(n1, n2);
        if (res == 3)
            mul(n1, n2);
        if (res == 4)
            div(n1, n2);
        if (res == 5) {
            exit();
            done = -1;
        }

    }
}

