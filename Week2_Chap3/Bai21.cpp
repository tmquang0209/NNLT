/*
Khi âm thanh truyền qua chất khí, tốc độ của nó phụ thuộc chủ yếu vào mật độ của môi
trường. Môi trường càng ít đặc thì tốc độ sẽ càng nhanh. Bảng sau đây cho thấy tốc độ
gần đúng của âm thanh ở 0 độ C, được đo bằng mét trên giây, khi di chuyển qua carbon
dioxide, không khí, helium và hydro.
Trang | 7
Loại khí Tốc độ (m/s)
Carbon Dioxide 258.0
Không khí 331.5
Helium 972.2
Hydro 1,270.0
Viết chương trình hiển thị menu cho phép người dùng chọn một trong bốn loại khí này.
Sau khi lựa chọn được thực hiện, người dùng nên nhập số giây cần thiết để âm thanh di
chuyển trong loại khí này từ nguồn của nó đến vị trí mà nó được phát hiện. Sau đó,
chương trình sẽ báo cáo khoảng cách (tính bằng mét) nguồn phát âm thanh từ vị trí phát
hiện.
Xác thực đầu vào: Kiểm tra xem người dùng đã chọn một trong các lựa chọn menu có
đúng hay chưa. Không chấp nhận thời gian ít hơn 0 giây hoặc hơn 30 giây.
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    const float SPEED_CO2 = 258.0,
                SPEED_AIR = 331.5,
                SPEED_HE = 972.2,
                SPEED_H2 = 1270.0;
    int choice;
    double time;
    cout << "1. Carbon Dioxide" << endl;
    cout << "2. Khong khi" << endl;
    cout << "3. Helium" << endl;
    cout << "4. Hydro" << endl;
    cout << "Nhap vao lua chon: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    case 2:
    case 3:
    case 4:
        cout << "Nhap vao thoi gian: ";
        cin >> time;
        if (time < 0 || time > 30)
        {
            cout << "Thoi gian khong hop le" << endl;
            return 0;
        }
        switch (choice)
        {
        case 1:
            cout << "Khoang cach: " << time * SPEED_CO2 << "m" << endl;
            break;
        case 2:
            cout << "Khoang cach: " << time * SPEED_AIR << "m" << endl;
            break;
        case 3:
            cout << "Khoang cach: " << time * SPEED_HE << "m" << endl;
            break;
        case 4:
            cout << "Khoang cach: " << time * SPEED_H2 << "m" << endl;
            break;
        }
        break;
    default:
        cout << "Lua chon khong hop le" << endl;
        break;
    }
    return 0;
}