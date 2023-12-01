/*
Viết một chương trình yêu cầu người dùng nhập vào một góc, đơn vị đo radians.
Chương trình sẽ hiển thị các giá trị sine, cosine, và tangent của góc đó. (Sử dụng
hàm sin, cos, và tan trong thư viện có sẵn để xác định các giá trị này.) Output sẽ hiện
thị các số dạng kí hiệu fixed-point, làm tròn đến 4 chữ số đằng sau dấu phẩy.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float radian;
    cout << "Nhap vao goc do (radian): ";
    cin >> radian;
    cout << "Goc do la: " << radian << endl;
    cout << "Sine: " << sin(radian) << endl;
    cout << "Cosine: " << cos(radian) << endl;
    cout << "Tangent: " << tan(radian) << endl;
    return 0;
}