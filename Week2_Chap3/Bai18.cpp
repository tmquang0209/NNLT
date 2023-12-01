/*
Viết một chương trình yêu cầu nhập vào tổng lượng calo và gram chất béo trong một
loại thực phẩm. Chương trình sẽ hiển thị phần trăm calo có trong chất béo. Nếu lượng
calo có trong chất béo ít hơn 30% tổng lượng calo của thực phẩm thì hiển thị thông báo
cho biết thực phẩm đó ít chất béo. Biết:
- 1gram chất béo có 9 calo
- Lượng calo trong số gram chất béo = số gram chất béo*9
- Tỷ lệ calo có trong thực phẩm = Lượng calo trong số gram chất béo / Tổng lượng calo
Xác nhận đầu vào: Đảm bảo số lượng calo và gram chất béo không nhỏ hơn 0. Ngoài
ra, số lượng calo từ chất béo không được lớn hơn tổng số calo (Số gram chất béo*9
phải nhỏ hơn Tổng lượng calo). Nếu điều đó xảy ra, hãy hiển thị thông báo lỗi cho biết
rằng số gram calo hoặc chất béo đã được nhập không chính xác.
*/

#include <iostream>
using namespace std;
int main()
{
    float calories, fatGrams;
    cout << "Nhap tong luong calo: ";
    cin >> calories;
    cout << "Nhap so gram chat beo: ";
    cin >> fatGrams;

    if (calories < 0 || fatGrams < 0)
    {
        cout << "So luong calo hoac so gram chat beo khong hop le";
    }
    else
    {
        float fatPercentage = fatGrams * 9 / calories;
        if (fatPercentage < 0.3)
        {
            cout << "Thuc pham nay khong du chat beo";
        }
        else
        {
            cout << "Phan tram chat beo trong thuc pham: " << fatPercentage;
        }
    }
    return 0;
}