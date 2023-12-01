/*
Nhiều chuyên gia tài chính khuyên rằng chủ sở hữu bất động sản nên bảo hiểm ngôi
nhà hoặc tòa nhà của họ ít nhất 80% số tiền mà nó sẽ chi phí để thay thế cấu trúc.
Viết một chương trình yêu cầu người dùng nhập chi phí thay thế của một tòa nhà,
sau đó hiển thị số tiền bảo hiểm tối thiểu mà họ nên mua cho tài sản đó.
*/
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    const float INSURE_PERCENTAGE = 0.8; // TODO: chi phí bảo hiểm 80%

    float replacementCost, minAmountInsurance;

    cout << "Nhap vao chi phi thay the: ";
    cin >> replacementCost;

    minAmountInsurance = replacementCost * INSURE_PERCENTAGE;

    cout << "So tien bao hiem toi thieu: " << setprecision(2) << fixed << minAmountInsurance << endl;
    return 0;
}