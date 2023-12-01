/*
Tháng có 30 ngày có 720 giờ và tháng có 31 ngày có 744 giờ.
Tháng Hai, với 28 ngày có 672 giờ.
Bạn có thể tính số phút trong một tháng bằng cách nhân số giờ của nó với 60.
Xác thực đầu vào của chương trình cho nhà cung cấp dịch vụ di động bằng cách hỏi
người dùng về tháng và xác thực rằng số phút đã nhập là không vượt quá mức tối đa
cho cả tháng. Đây là bảng các tháng, ngày và số giờ của mỗi tháng.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const float PACKAGE_A = 39.99,
                PACKAGE_B = 59.99,
                PACKAGE_C = 69.99,

                PACKAGE_A_LIMIT = 450,
                PACKAGE_B_LIMIT = 900,

                PACKAGE_A_ADDITIONAL_CHARGE = 0.45,
                PACKAGE_B_ADDITIONAL_CHARGE = 0.40,

                _31_DAYS = 31,
                _30_DAYS = 30,
                _28_DAYS = 28,

                NUM_MIN_IN_30_DAYS = 720 * 60,
                NUM_MIN_IN_31_DAYS = 744 * 60,
                NUM_MIN_IN_28_DAYS = 672 * 60;

    char serviceChoices;
    float minuteBuy, totalPayA, totalPayB, totalPayC;
    cout << "Nhap vao goi da mua: ";
    cin >> serviceChoices;

    switch (serviceChoices)
    {
    case 'A':
    case 'a':
    case 'B':
    case 'b':
    case 'C':
    case 'c':
        int month, dayOfMonth;
        cout << "Nhap vao thang: ";
        cin >> month;
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dayOfMonth = _31_DAYS;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            dayOfMonth = _30_DAYS;
            break;
        case 2:
            dayOfMonth = _28_DAYS;
            break;
        default:
            dayOfMonth = 0;
            break;
        }
        if (dayOfMonth != 0)
        {
            cout << "Nhap so phut su dung: ";
            cin >> minuteBuy;
            if (minuteBuy < 0)
            {
                cout << "So phut su dung khong hop le!" << endl;
                break;
            }
            else
            {
                if (dayOfMonth == _31_DAYS && minuteBuy > NUM_MIN_IN_31_DAYS)
                {
                    cout << "So phut khong duoc lon hon " << NUM_MIN_IN_31_DAYS << endl;
                    break;
                }
                else if (dayOfMonth == _30_DAYS && minuteBuy < NUM_MIN_IN_30_DAYS)
                {
                    cout << "So phut khong duoc lon hon " << NUM_MIN_IN_30_DAYS << endl;
                    break;
                }
                else if (dayOfMonth == _28_DAYS && minuteBuy < NUM_MIN_IN_28_DAYS)
                {
                    cout << "So phut khong duoc lon hon " << NUM_MIN_IN_28_DAYS << endl;
                    break;
                }
                else
                {
                    cout << setprecision(2) << fixed;

                    totalPayA = (minuteBuy > PACKAGE_A_LIMIT) ? PACKAGE_A + (minuteBuy - PACKAGE_A_LIMIT) * PACKAGE_A_ADDITIONAL_CHARGE : PACKAGE_A;
                    totalPayB = (minuteBuy > PACKAGE_B_LIMIT) ? PACKAGE_B + (minuteBuy - PACKAGE_B_LIMIT) * PACKAGE_B_ADDITIONAL_CHARGE : PACKAGE_B;
                    totalPayC = PACKAGE_C;

                    if (serviceChoices == 'A' || serviceChoices == 'a')
                    {
                        cout << "Tong tien phai tra la: " << totalPayA << endl;
                        if (totalPayA > totalPayB)
                            cout << "Su dung goi B tiet kiem hon " << totalPayA - totalPayB << endl;
                        else if (totalPayA > totalPayC)
                            cout << "Su dung goi C tiet kiem hon " << totalPayA - totalPayC << endl;
                    }
                    else if (serviceChoices == 'B' || serviceChoices == 'b')
                    {
                        cout << "Tong tien phai tra la: " << totalPayB << endl;
                        if (totalPayB > totalPayA)
                            cout << "Su dung goi A tiet kiem hon " << totalPayB - totalPayA << endl;
                    }
                    else if (serviceChoices == 'B' || serviceChoices == 'b')
                    {
                        cout << "Tong tien phai tra la: " << totalPayB << endl;
                    }
                    else
                    {
                        cout << "Tong tien phai tra la: " << totalPayC << endl;
                    }
                }
            }
            break;
        default:
            cout << "Nhap khong dung, vui long kiem tra lai";
            break;
        }
    }
    return 0;
}