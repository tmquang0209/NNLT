/*
Một công ty bán lẻ phải nộp một báo cáo thuế bán hàng hàng tháng liệt kê doanh thu
trong tháng và số thuế bán hàng đã thu được. Viết một chương trình yêu cầu nhập
tháng, năm và tổng số tiền thu được tại máy tính tiền (tức là doanh thu cộng với thuế
Trang | 4
bán hàng). Giả sử thuế bán hàng của tiểu bang là 4 phần trăm, và thuế bán hàng của
quận là 2 phần trăm.
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    cout << setprecision(2) << fixed;
    string month;
    int year;
    double total, sales, taxRate1 = 0.04, taxRate2 = 0.02;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the total: ";
    cin >> total;

    sales = total / 1.06;
    double tax_1 = sales * taxRate1;
    double tax_2 = sales * taxRate2;
    cout << "Month: " << month << "Year: " << year << endl;
    cout << "-----------------------" << endl;
    cout << "Total collected:      $" << setw(10) << total << endl;
    cout << "Sales:                $" << setw(10) << sales << endl;
    cout << "County Sales Tax:     $" << setw(10) << tax_2 << endl;
    cout << "State Sales Tax:      $" << setw(10) << tax_1 << endl;
    cout << "Total Sales Tax:      $" << setw(10) << tax_1 + tax_2 << endl;
    return 0;
}