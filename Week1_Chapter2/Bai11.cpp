/*
Viết một chương trình yêu cầu người dùng nhập chi phí hàng tháng cho các chi phí
sau đây phát sinh từ việc vận hành ô tô của họ: thanh toán khoản vay, bảo hiểm,
xăng, dầu, lốp và bảo dưỡng. Sau đó, chương trình sẽ hiển thị tổng chi phí hàng
tháng của các chi phí này và tổng chi phí hàng năm của các chi phí này.
*/

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    double loan, insurrance, fuel, oil, maintenance, totalMonthly, totalYearly;

    cout << "Nhap khoan vay: ";
    cin >> loan;
    cout << "Nhap khoan bao hiem: ";
    cin >> insurrance;
    cout << "Nhap khoan xang: ";
    cin >> fuel;
    cout << "Nhap khoan dau: ";
    cin >> oil;
    cout << "Nhap khoan lop: ";
    cin >> maintenance;

    totalMonthly = loan + insurrance + fuel + oil + maintenance;
    totalYearly = totalMonthly * 12;

    cout << "Tong chi phi hang thang: " << totalMonthly << endl;
    cout << "Tong chi phi hang nam: " << totalYearly << endl;
    return 0;
}