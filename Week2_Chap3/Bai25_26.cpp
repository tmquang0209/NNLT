#include <iostream>
using namespace std;

int main()
{
    const float PACKAGE_A = 39.99,
                PACKAGE_B = 59.99,
                PACKAGE_C = 69.99,

                PACKAGE_A_LIMIT = 450,
                PACKAGE_B_LIMIT = 900,

                PACKAGE_A_ADDITIONAL_CHARGE = 0.45,
                PACKAGE_B_ADDITIONAL_CHARGE = 0.40;

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
        cout << "Nhap so phut su dung: ";
        cin >> minuteBuy;
        if (minuteBuy < 0)
        {
            cout << "So phut su dung khong hop le. Xin kiem tra lai.";
            break;
        }

        double moneySave;

        totalPayA = (minuteBuy > PACKAGE_A_LIMIT) ? PACKAGE_A + (minuteBuy - PACKAGE_A_LIMIT) * PACKAGE_A_ADDITIONAL_CHARGE : PACKAGE_A;
        totalPayB = (minuteBuy > PACKAGE_B_LIMIT) ? PACKAGE_B + (minuteBuy - PACKAGE_B_LIMIT) * PACKAGE_B_ADDITIONAL_CHARGE : PACKAGE_B;
        totalPayC = PACKAGE_C;

        if (serviceChoices == 'A' || serviceChoices == 'a')
        {
            cout << "Tien phai tra la: " << totalPayA << endl;
            if (totalPayA > totalPayB)
                cout << "Goi B tiet kiem hon " << (totalPayA - totalPayB) << endl;
            else if (totalPayA > totalPayC)
                cout << "Goi C tiet kiem hon " << (totalPayA - totalPayC) << endl;
        }
        else if (serviceChoices == 'B' || serviceChoices == 'b')
        {
            cout << "Tien phai tra la: " << totalPayB << endl;
            if (totalPayB > totalPayA)
                cout << "Goi A tiet kiem hon " << (totalPayB - totalPayA) << endl;
            else if (totalPayB > totalPayC)
                cout << "Goi C tiet kiem hon " << (totalPayB - totalPayC) << endl;
        }
        else if (serviceChoices == 'C' || serviceChoices == 'c')
        {
            cout << "Tien phai tra la: " << totalPayC << endl;
            if (totalPayC > totalPayA)
                cout << "Goi A tiet kiem hon " << (totalPayC - totalPayA) << endl;
            else if (totalPayC > totalPayB)
                cout << "Goi B tiet kiem hon " << (totalPayC - totalPayB) << endl;
        }

        break;
    default:
        cout << "Nhap khong dung, vui long kiem tra lai";
        break;
    }
    return 0;
}