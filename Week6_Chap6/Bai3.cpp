/*
3. Khoai tây chiên và Salsa (Bắt buộc)
Viết một chương trình cho phép nhà sản xuất khoai tây chiên và salsa theo dõi doanh
số của năm loại salsa khác nhau: nhẹ, vừa, ngọt, nóng và vị chanh. Chương trình nên
sử dụng cùng lúc hai mảng 5 phần tử: một mảng chuỗi chứa tên năm loại salsa và một
mảng số nguyên chứa số lọ đã bán tháng qua cho mỗi loại salsa. Tên các loại salsa nên
được lưu trữ bằng cách khởi tạo danh sách tại thời điểm tạo mảng tên. Chương trình
yêu cầu người dùng nhập số lượng lọ được bán cho từng loại. Khi dữ liệu bán hàng này
đã được nhập, chương trình sẽ tạo ra một báo cáo hiển thị doanh số bán hàng cho từng
loại salsa, tổng doanh số bán hàng và tên của các sản phẩm bán chạy nhất và bán chậm
nhất.
Xác thực đầu vào: Không chấp nhận giá trị âm cho số lượng lọ đã bán
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string arrName[] = {"Nhe", "Vua", "Ngot", "Nong", "Chanh"};
    int arrSold[5];
    int total = 0, highest = 0, lowest = 0, indexMax = 0, indexMin = 0;
    for (int i = 0; i < 5; i++)
    {
        do
        {
            cout << "Nhap so luong ban hang cua loai " << arrName[i] << ": ";
            cin >> arrSold[i];
        } while (arrSold[i] < 0);

        total += arrSold[i];

        if (arrSold[i] > arrSold[indexMax])
        {
            highest = arrSold[i];
            indexMax = i;
        }

        else if (arrSold[i] < arrSold[indexMin])
        {
            lowest = arrSold[i];
            indexMin = i;
        }
    }
    cout << "Doanh thu cua cac loai salsa la: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arrName[i] << ": " << arrSold[i] << endl;
    }
    cout << "Tong doanh thu: " << total << endl;
    cout << "Loai ban chay nhat: " << arrName[indexMax] << "(" << highest << ")" << endl;
    cout << "Loai ban cham nhat: " << arrName[indexMin] << "(" << lowest << ")" << endl;
    return 0;
}