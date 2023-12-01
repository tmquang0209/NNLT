/*
Viết chương trình yêu cầu nhập tên vận động viên nhảy sào, ngày thi đấu, chiều cao
nhảy (được tính bằng mét) của 3 vận động viên có thành tích tốt nhất. Sau đó chương
trình sẽ hiển thị danh sách theo thứ tự thành tích đạt được.
Xác thực đầu vào: Chỉ chấp nhận các giá trị từ 2.0m đến 5.0m cho các chiều cao
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string namePer1, datePer1,
        namePer2, datePer2,
        namePer3, datePer3;
    float heightPer1, heightPer2, heightPer3;
    cout << "Nhap ten van dong vien 1: ";
    cin >> namePer1;
    cout << "Nhap ngay thi dau cua " << namePer1 << ": ";
    cin >> datePer1;
    cout << "Nhap chi so cao cua " << namePer1 << ": ";
    cin >> heightPer1;
    cout << "====================" << endl;
    cout << "Nhap ten van dong vien 2: ";
    cin >> namePer2;
    cout << "Nhap ngay thi dau cua " << namePer2 << ": ";
    cin >> datePer2;
    cout << "Nhap chi so cao cua " << namePer2 << ": ";
    cin >> heightPer2;
    cout << "====================" << endl;
    cout << "Nhap ten van dong vien 3: ";
    cin >> namePer3;
    cout << "Nhap ngay thi dau cua " << namePer3 << ": ";
    cin >> datePer3;
    cout << "Nhap chi so cao cua " << namePer3 << ": ";
    cin >> heightPer3;
    cout << "====================" << endl;

    if (heightPer1 < 2 || heightPer1 > 5 || heightPer2 < 2 || heightPer2 > 5 || heightPer3 < 2 || heightPer3 > 5)
    {
        cout << "Chi so cao khong hop le!" << endl;
        return 0;
    }
    if (heightPer1 > heightPer2 && heightPer1 > heightPer3)
    {
        cout << namePer1 << " co chi so cao cao nhat" << endl;
    }
    else if (heightPer2 > heightPer1 && heightPer2 > heightPer3)
    {
        cout << namePer2 << " co chi so cao cao nhat" << endl;
    }
    else if (heightPer3 > heightPer1 && heightPer3 > heightPer2)
    {
        cout << namePer3 << " co chi so cao cao nhat" << endl;
    }
    else if (heightPer1 == heightPer2 && heightPer1 > heightPer3)
    {
        cout << namePer1 << " va " << namePer2 << " co chi so cao cao nhat" << endl;
    }
    else if (heightPer1 == heightPer3 && heightPer1 > heightPer2)
    {
        cout << namePer1 << " va " << namePer3 << " co chi so cao cao nhat" << endl;
    }
    else if (heightPer2 == heightPer3 && heightPer2 > heightPer1)
    {
        cout << namePer2 << " va " << namePer3 << " co chi so cao cao nhat" << endl;
    }
    else if (heightPer1 == heightPer2 && heightPer1 == heightPer3)
    {
        cout << namePer1 << ", " << namePer2 << " va " << namePer3 << " co chi so cao cao nhat" << endl;
    }
    else
    {
        cout << "Khong co thanh tich nao cao nhat" << endl;
    }
    return 0;
}