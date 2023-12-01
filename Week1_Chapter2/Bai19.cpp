#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    const int SPACE = 10;

    double payment, rate, times, loan, amountPaidBack, interestPaid;
    cout << "Nhap vao so tien vay: ";
    cin >> loan;
    cout << "Nhap vao lai suat: ";
    cin >> rate;
    cout << "Nhap vao so lan thanh toan: ";
    cin >> times;

    rate = (rate / 12) / 100;
    payment = (loan * rate * pow(1 + rate, times)) / (pow(1 + rate, times) - 1);

    amountPaidBack = payment * times;
    interestPaid = amountPaidBack - loan;

    cout << setprecision(2) << fixed;
    cout << "Loan Amount:                $" << setw(SPACE) << loan << endl;
    cout << "Monthly Interest Rate:      " << setw(SPACE) << rate * 100 << "%" << endl;
    cout << "Number of Payments:         $" << setw(SPACE) << times << endl;
    cout << "Monthly Payment:            $" << setw(SPACE) << payment << endl;
    cout << "Amount Paid Back:           $" << setw(SPACE) << amountPaidBack << endl;
    cout << "Interest Paid:              $" << setw(SPACE) << interestPaid << endl;
    return 0;
}