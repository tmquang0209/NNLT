/*
Quận Madison cung cấp một khoản miễn thuế chủ nhà $ 5,000 cho những người cao
tuổi của nó. Ví dụ: nếu ngôi nhà của một người cao tuổi được định giá là 158.000
đô la, giá trị được đánh giá của nó sẽ là 94.800 đô la, như đã giải thích ở trên. Tuy
nhiên, anh ta sẽ chỉ trả thuế trên 89.800 đô la. Với mức thuế năm ngoái là 2,64 đô la
cho mỗi 100 đô la giá trị được đánh giá, thuế tài sản sẽ là 2.370,72 đô la. Ngoài việc
giảm thuế, công dân cao tuổi được phép trả thuế tài sản của họ thành bốn lần như
nhau. Khoản thanh toán hàng quý đến hạn cho tài sản này sẽ là $ 592,68. Viết một
chương trình yêu cầu người dùng nhập giá trị thực của một phần tài sản và thuế suất
hiện hành cho mỗi $ 100 giá trị được đánh giá. Sau đó, chương trình sẽ tính toán và
báo cáo mức thuế bất động sản hàng năm mà một chủ nhà cao cấp sẽ phải trả cho
bất động sản này và hóa đơn thuế hàng quý sẽ là bao nhiêu
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const float ASSESSMENT_PER = 0.6;
    const int FIVE_THOUSAND = 5000, HUNDRED = 100, FOUR = 4;
    float valueOfProperty, currentTaxRate, totalAnnualPropertyTax, quarterlyTaxBill;

    cout << "Gia tri tai san: ";
    cin >> valueOfProperty;
    cout << "Thue suat hien hanh: ";
    cin >> currentTaxRate;

    totalAnnualPropertyTax = (((valueOfProperty * ASSESSMENT_PER) - FIVE_THOUSAND) / HUNDRED) * currentTaxRate;
    quarterlyTaxBill = totalAnnualPropertyTax / FOUR;

    cout << setprecision(2) << fixed;
    cout << "----------------------------------------------------" << endl;
    cout << "Gia tri can nha:        $" << setw(10) << valueOfProperty << endl;
    cout << "Thue suat hang nam      $" << setw(10) << totalAnnualPropertyTax << endl;
    cout << "Hoa don thue hang quy   $" << setw(10) << quarterlyTaxBill << endl;
    cout << "----------------------------------------------------" << endl;
    return 0;
}