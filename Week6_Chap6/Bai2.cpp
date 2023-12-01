/*
2. Thống kê lượng mưa (Bắt buộc)
Viết một chương trình cho phép người dùng nhập lượng mưa của mỗi tháng trong 12
tháng vào một mảng số double. Chương trình sẽ hiển thị tổng lượng mưa trong năm,
lượng mưa trung bình hàng tháng và các tháng có lượng mưa cao nhất và thấp nhất.
Xác thực đầu vào: Không chấp nhận số âm cho số liệu lượng mưa hàng tháng.
*/

#include <iostream>
using namespace std;

double highestAverageRainfall(double[]);
double lowestAverageRainfall(double[]);

int main()
{
    double arr[12];
    double total = 0;
    double highest = 0;
    double lowest = 0;
    for (int i = 0; i < 12; i++)
    {
        do
        {
            cout << "Nhap luong mua thu " << i + 1 << ": ";
            cin >> arr[i];
        } while (arr[i] < 0);
        total += arr[i];
        if (arr[i] > highest)
        {
            highest = arr[i];
        }
        if (arr[i] < lowest)
        {
            lowest = arr[i];
        }
    }
    cout << "Tong luong mua trong nam: " << total << endl;
    cout << "Luong mua trung binh trong nam: " << total / 12 << endl;
    cout << "Luong mua cao nhat trong nam: " << highest << endl;
    cout << "Luong mua thap nhat trong nam: " << lowest << endl;
    return 0;
}