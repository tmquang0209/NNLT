/*
Bảng sau đây cho thấy tốc độ gần đúng của âm thanh trong không khí, nước và thép.
Môi trường Tốc độ
Không khí 1.100 feet/giây
Nước 4.900 feet/giây
Thép 16.400 feet/giây
Viết chương trình hiển thị menu cho phép người dùng chọn: không khí, nước hoặc thép.
Sau khi người dùng thực hiện lựa chọn, sẽ được yêu cầu nhập khoảng cách mà sóng âm
thanh sẽ truyền trong môi trường đã chọn. Sau đó, chương trình sẽ hiển thị khoảng thời
gian cần thiết. (Làm tròn câu trả lời đến bốn chữ số thập phân.)
Xác thực đầu vào: Kiểm tra xem người dùng đã chọn một trong các lựa chọn có sẵn từ
menu chưa ? Không chấp nhận khoảng cách nhỏ hơn 0.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const float SPEED_O2 = 1.100,
                SPEED_WATER = 4.900,
                SPEED_STEEL = 16.400;
    int choice;
    cout << "1. Khong khi" << endl;
    cout << "2. Nuoc" << endl;
    cout << "3. Thep" << endl;
    cout << "Nhap lua chon: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    case 2:
    case 3:
        float distance;
        cout << "Nhap khoang cach: ";
        cin >> distance;
        if (distance < 0)
        {
            cout << "Khoang cach khong hop le" << endl;
            break;
        }
        cout << setprecision(4) << fixed;
        switch (choice)
        {
        case 1:
            cout << "Thoi gian can thiet: " << distance / SPEED_O2 << " giay" << endl;
            break;
        case 2:
            cout << "Thoi gian can thiet: " << distance / SPEED_WATER << " giay" << endl;
            break;
        case 3:
            cout << "Thoi gian can thiet: " << distance / SPEED_STEEL << " giay" << endl;
            break;
        }
        break;
    default:
        cout << "Lua chon khong hop le" << endl;
        return 0;
    }
    return 0;
}