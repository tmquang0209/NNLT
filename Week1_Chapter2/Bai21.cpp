/*
Chỉnh sửa chương trình bạn đã viết trong Programming Challenge 20 (Pizza Pi) để
báo cáo số lượng pizza bạn cần mua cho một bữa tiệc nếu mỗi người tham dự có khả
năng sẽ ăn khoảng 4 miếng cắt. Chương trình cần yêu cầu người dùng nhập vào số
lượng người tham dự bữa tiệc, và đường kích loại pizza sẽ được gọi mua. Sau đó
tính toán và hiển thị số lượng pizza cần mua lên màn hình.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const float PI = 3.14, FOUR = 4;
    float radius, acreage, slice, area = 14.125;
    int participants;

    cout << "Nhap vao ban kinh cua pizza (inch): ";
    cin >> radius;
    cout << "Nhap so nguoi tham du: ";
    cin >> participants;

    slice = participants * FOUR;

    acreage = radius * radius * PI;
    cout << "So luong pizza can mua la: " << setprecision(1) << fixed << slice / (acreage / area) << endl;

    return 0;
}