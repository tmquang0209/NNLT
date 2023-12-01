/*
Viết một chương trình yêu cầu người dùng nhập doanh số bán hàng của ngày hôm nay
của 5 cửa hàng. Sau đó, chương trình sẽ hiển thị biểu đồ dạng thanh so sánh doanh số
bán hàng của từng cửa hàng. Tạo mỗi thanh trong biểu đồ thể hiện doanh số bán hàng
của một của hàng. Mỗi dấu hoa thị “*” tương đương với 100 đô la doanh thu.
Dưới đây là một ví dụ về đầu ra của chương trình:
Nhập vào doanh số bán hàng của cửa hàng thứ 1: 1000 Enter
Nhập vào doanh số bán hàng của cửa hàng thứ 2: 1200 Enter
Nhập vào doanh số bán hàng của cửa hàng thứ 3: 1800 Enter
Nhập vào doanh số bán hàng của cửa hàng thứ 4: 800 Enter
Nhập vào doanh số bán hàng của cửa hàng thứ 5: 1900 Enter
SALES BAR CHART
(Each * = $100)
Cửa hàng 1: **********
Cửa hàng 2: ************
Cửa hàng 3: ******************
Cửa hàng 4: ********
Cửa hàng 5: *******************
*/

#include <iostream>

using namespace std;

int main()
{
    int turnoverShop1, turnoverShop2, turnoverShop3, turnoverShop4, turnoverShop5;
    cout << "Nhap vao doanh so ban hang cua cua hang thu 1: ";
    cin >> turnoverShop1;
    cout << "Nhap vao doanh so ban hang cua cua hang thu 2: ";
    cin >> turnoverShop2;
    cout << "Nhap vao doanh so ban hang cua cua hang thu 3: ";
    cin >> turnoverShop3;
    cout << "Nhap vao doanh so ban hang cua cua hang thu 4: ";
    cin >> turnoverShop4;
    cout << "Nhap vao doanh so ban hang cua cua hang thu 5: ";
    cin >> turnoverShop5;

    cout << "SALES BAR CHART" << endl;

    cout << "Cua hang 1: ";
    for (int i = 0; i < turnoverShop1 / 100; i++)
        cout << "*";

    cout << endl;
    cout << "Cua hang 2: ";
    for (int i = 0; i < turnoverShop2 / 100; i++)
        cout << "*";

    cout << endl;
    cout << "Cua hang 3: ";
    for (int i = 0; i < turnoverShop3 / 100; i++)
        cout << "*";

    cout << endl;
    cout << "Cua hang 4: ";
    for (int i = 0; i < turnoverShop4 / 100; i++)
        cout << "*";

    cout << endl;
    cout << "Cua hang 5: ";
    for (int i = 0; i < turnoverShop5 / 100; i++)
        cout << "*";
}
