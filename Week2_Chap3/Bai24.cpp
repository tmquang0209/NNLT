/*
24. Cuộc gọi đường dài
Một nhà cung cấp dịch vụ đường dài cho các cuộc gọi điện thoại:
Thời gian gọi Tiền trên 1 phút (cent)
00:00-06 :59 0.05
07 :00-19 :00 0.45
19 :01-23 :59 0.20
Viết chương trình yêu cầu thời gian bắt đầu và số phút của cuộc gọi, đồng thời hiển thị
cước phí. Chương trình sẽ yêu cầu thời gian được nhập dưới dạng số dấu chấm động ở
dạng HH.MM. Ví dụ: 07:00 giờ sẽ được nhập là 07.00 và 16:28 giờ sẽ được nhập là
16,28.
Xác thực đầu vào: Chương trình không chấp nhận thời gian lớn hơn 23:59. Ngoài ra,
không có số nào có hai chữ số cuối cùng lớn hơn 59 sẽ được chấp nhận. Gợi ý: Giả sử
num là một biến dấu phẩy động, biểu thức sau sẽ cung cấp cho bạn phần phân số của
nó: num - static_cast <int> (num)
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float startingTime;
    cout << "Nhap vao thoi gian bat dau goi: ";
    cin >> startingTime;
    if (startingTime > 23.59)
    {
        cout << "Thoi gian khong hop le!";
        return 0;
    }
    else
    {
        if ((startingTime - static_cast<int>(startingTime)) > 0.59)
        {
            cout << "Thoi gian khong hop le!";
        }
        else
        {
            float numMins;
            cout << "Thoi gian goi: ";
            cin >> numMins;

            if ((numMins - static_cast<int>(numMins)) > 0.59)
            {
                cout << "Thoi gian khong hop le!";
            }
            else
            {
                float totalCharges;
                cout << setprecision(2) << fixed;
                if (startingTime >= 00.00 && startingTime <= 06.59)
                {
                    totalCharges = 0.05 * numMins;
                }
                else if (startingTime >= 07.00 && startingTime <= 19.00)
                {
                    totalCharges = 0.45 * numMins;
                }
                else if (startingTime >= 19.01 && startingTime <= 23.59)
                {
                    totalCharges = 0.20 * numMins;
                }
                cout << "Tong tien phai tra: " << totalCharges << endl;
            }
        }
    }
    return 0;
}