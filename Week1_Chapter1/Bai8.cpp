#include<iostream>
using namespace std;
int main(){
    float cashItem1, cashItem2, cashItem3, cashItem4, cashItem5, totalPay, cashTax, totalCash;
    cashItem1 = 15.59;
    cashItem2 = 24.59;
    cashItem3 = 6.59;
    cashItem4 = 12.59;
    cashItem5 = 3.59;
    totalPay = cashItem1 + cashItem2 + cashItem3 + cashItem4 + cashItem5;
    cashTax = totalPay * 0.07;
    totalCash = totalPay + cashTax;
    cout << totalCash << endl;
}