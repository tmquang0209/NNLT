/*
Ngân hàng tính phí 10$/1 tháng cộng với phí sử dụng séc như sau:
 0.1$ mỗi séc nếu số lượng không quá 20 séc
 0.08$ mỗi séc nếu số lượng séc trong khoảng 20 đến 39
 0.06$ mỗi séc nếu số lượng séc trong khoảng 40 đến 59
 0.04$ mỗi séc nếu số lượng séc trong từ 60 trở lên
Mặt khác sẽ tính thêm 15$ nếu số dư trong tài khoản (trước khi trừ 2 loại phí ở trên)
dưới 400$
Viết chương trình nhập vào số dư tài khoản và số lượng séc sử dụng trong tháng sau đó
in ra các khoản phí người dùng phải trả.
Chú ý: không chấp nhận người dùng nhập số âm.
*/

#include <iostream>

using namespace std;

int main()
{
    float balance, numOfChecks, feeOfMonth, feeOfChecks, totalFee, cash;
    cout << "Nhap so du tai khoan: ";
    cin >> balance;
    cout << "Nhap so luong sec: ";
    cin >> numOfChecks;
    if (balance < 0 || numOfChecks < 0)
    {
        cout << "So du tai khoan hoac so luong sec khong hop le!" << endl;
        return 0;
    }

    cash = balance - 10;
    if (numOfChecks <= 20)
    {
        feeOfChecks = numOfChecks * 0.1;
    }
    else if (numOfChecks <= 39)
    {
        feeOfChecks = numOfChecks * 0.08;
    }
    else if (numOfChecks <= 59)
    {
        feeOfChecks = numOfChecks * 0.06;
    }
    else
    {
        feeOfChecks = numOfChecks * 0.04;
    }

    cash -= feeOfChecks;
    if (cash < 400)
    {
        totalFee = feeOfChecks + 15 + 10;
    }
    else
    {
        totalFee = feeOfChecks + 10;
    }
    cout << "Tong cac khoan phi: " << totalFee << endl;
    return 0;
}