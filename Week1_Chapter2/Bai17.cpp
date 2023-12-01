#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    char ch;
    int num1, num2;
    num1 = rand() % 1000 + 100;
    num2 = rand() % 1000 + 100;
    cout << setw(4) << num1 << endl;
    cout << setw(1) << "+" << num2 << endl;
    cout << "------" << endl;
    system("pause");
    cout << setw(4) << num1 << endl;
    cout << setw(1) << "+" << num2 << endl;
    cout << "------" << endl;
    cout << setw(4) << num1 + num2;
}