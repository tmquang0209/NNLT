#include <iostream>
using namespace std;
int main()
{
    float cash, tax, tip, cashTax, cashTip;
    cash = 88.67;
    tax = 0.675;
    tip = 0.2;
    cashTax = cash * tax;
    cashTip = (cash + cashTax) * tip;
    cout << "Chi phi bua an: " << cash << endl;
    cout << "Chi phi thue: " << cashTax << endl;
    cout << "So tien Tip: " << cashTip << endl;
    cout << "Tong chi phi: " << cashTax + cashTip + cash << endl;
    return 0;
}