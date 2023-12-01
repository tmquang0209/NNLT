/*
Viết chương trình thực hiện phép tính cho chủ vườn nho. Chương trình sẽ yêu cầu
người dùng nhập các thông tin sau:
 Chiều dài của hàng, tính bằng feet
 Khoảng không gian được sử dụng bởi một cụm cuối bài, tính bằng feet
 Khoảng cách giữa các dây leo, tính bằng feet
 Sau khi dữ liệu đầu vào đã được nhập, chương trình sẽ tính toán và hiển thị số
lượng nho sẽ phù hợp trong hàng.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int length, area, distance, count;
    cout << "Nhap chieu dai hang: ", cin >> length;
    cout << "Nhap khoang cach giua 2 day leo: ", cin >> distance;
    cout << "Nhap khoang trong: ", cin >> area;
    count = (length - 2 * area) / distance;
    cout << "So luong nho phu hop trong hang: " << count;
    return 0;
}