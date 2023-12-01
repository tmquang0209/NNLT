/*
Bảng sau liệt kê các điểm đông đặc và sôi của một số chất. Viết một chương trình yêu
cầu người dùng nhập một nhiệt độ và sau đó hiển thị các chất sẽ đông đặc ở nhiệt độ
đó và những chất sẽ sôi ở nhiệt độ đó. Ví dụ, nếu người dùng nhập -20, chương trình
sẽ báo rằng nước sẽ đóng băng và oxy sẽ sôi ở nhiệt độ đó.
Chất Nhiệt độ đông(0F) Nhiệt độ sôi (0F)
Cồn Ethyl -173 172
Thủy ngân -38 676
Oxy -362 -306
Nước 32 212

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int temp;
    cout << "Nhap temp: ";
    cin >> temp;

    if (temp <= 32)
    {
        cout << "Freeze: " << endl;
        cout << "Nuoc" << endl;
        if (temp <= -38)
        {
            cout << "Thuy ngan" << endl;
            if (temp <= -173)
            {
                cout << "Con Ethyl" << endl;
                if (temp <= -362)
                {
                    cout << "Oxy" << endl;
                }
            }
        }
    }

    if (temp >= -306)
    {
        cout << "Soi: " << endl;
        cout << "Oxy" << endl;
        if (temp >= 172)
        {
            cout << "Con Ethyl" << endl;
            if (temp >= 212)
            {
                cout << "Nuoc" << endl;
                if (temp >= 676)
                {
                    cout << "Thuy ngan" << endl;
                }
            }
        }
    }
    return 0;
}