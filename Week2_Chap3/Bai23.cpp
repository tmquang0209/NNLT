/*
Viết chương trình hiển thị 1 thực đơn với các chức năng sau:
1. Tính diện tích hình tròn
2. Tính diện tích hình chữ nhật
3. Tính diện tích hình tam giác vuông
4. Thoát
Nhập lựa chọn [1-4] :
Yêu cầu chọn các chức năng từ 1 đến 4. Sau đó tùy lựa chọn của người dùng để thực hiện đúng chức năng.
Biết :
 Diện tích hình tròn là PI*r^2
 Diện tích hình chữ nhật là dài x rộng.
 Diện tích tam giác vuông (biết độ dài 2 cạnh góc vuông a, b) là 0.5 x a*b
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int choice;
    float area;
    cout << "1. Tinh dien tich hinh tron" << endl;
    cout << "2. Tinh dien tich hinh chu nhat" << endl;
    cout << "3. Tinh dien tich hinh tam giac vuong" << endl;
    cout << "4. Thoat" << endl;
    cout << "Nhap lua chon [1-4]: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        float r;
        cout << "Nhap ban kinh: ";
        cin >> r;
        area = 3.14 * r * r;
        cout << "Dien tich hinh tron: " << area << endl;
        break;
    case 2:
        float length, width;
        cout << "Nhap chieu dai: ";
        cin >> length;
        cout << "Nhap chieu rong: ";
        cin >> width;
        area = length * width;
        cout << "Dien tich hinh chu nhat: " << area << endl;
        break;
    case 3:
        float a, b;
        cout << "Nhap chieu dai: ";
        cin >> a;
        cout << "Nhap chieu rong: ";
        cin >> b;
        area = 0.5 * a * b;
        cout << "Dien tich hinh tam giac vuong: " << area << endl;
        break;
    case 4:
        cout << "Thoat chuong trinh" << endl;
        break;
    default:
        cout << "Lua chon khong hop le" << endl;
        break;
    }
    return 0;
}