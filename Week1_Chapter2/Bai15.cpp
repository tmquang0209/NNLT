/*
Một quận thu thuế bất động sản trên giá trị đánh giá của tài sản, bằng 60 phần trăm
giá trị thực của tài sản. Nếu một mẫu đất được định giá là 10.000 đô la, thì giá trị
đánh giá của nó là 6.000 đô la. Thuế tài sản sau đó là 75 ¢ cho mỗi $ 100 của giá trị
đánh giá. Thuế cho diện tích được đánh giá là $ 6.000 sẽ là $ 45. Viết chương trình
yêu cầu nhập giá trị thực của một phần tài sản, sau đó hiển thị giá trị đánh giá và
thuế tài sản.
(1 đô la = 100 cent)
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const float ASSESSMENT_PER = 0.6, PROPERTY_TAX_PER = 0.75, HUNDRED = 100;
    float totalAssessmentValue, totalPropertyTax, valueOfProperty;
    cout << "Nhap gia tri tai san: ";
    cin >> valueOfProperty;
    totalAssessmentValue = valueOfProperty * ASSESSMENT_PER;
    totalPropertyTax = (totalAssessmentValue / HUNDRED) * PROPERTY_TAX_PER;

    cout << setprecision(2) << fixed << endl;
    cout << "Gia tri danh gia:    $" << setw(10) << totalAssessmentValue << endl;
    cout << "Thu tai san:         $" << setw(10) << totalPropertyTax << endl;
    return 0;
}
