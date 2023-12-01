#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    const int SPACE = 10;
    double amount, principal, rate, times, interest;
    cout << "Nhap vao so tien vay: ";
    cin >> principal;
    cout << "Nhap vao lai suat: ";
    cin >> rate;
    cout << "Nhap vao so lai gop trong 1 nam: ";
    cin >> times;

    rate = rate / 100;
    amount = principal * pow((1 + rate / times), times);
    interest = amount - principal;

    cout << setprecision(2) << fixed;
    cout << "Interest Rate:           " << setw(SPACE) << rate * 100 << "%" << endl;
    cout << "Times Compunded:          " << setw(SPACE) << times << endl;
    cout << "Interest:                $" << setw(SPACE) << interest << endl;
    cout << "Amount in Savings:       $" << setw(SPACE) << amount << endl;
    return 0;
}