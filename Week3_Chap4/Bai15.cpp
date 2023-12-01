/*
Viết chương trình hiển thị báo cáo lương hàng tuần. Một vòng lặp trong chương trình
sẽ yêu cầu người dùng cung cấp mã số nhân viên, tổng lương, thuế tiểu bang, thuế liên
bang và thuế thu nhập. Vòng lặp sẽ kết thúc khi nhập mã số nhân viên là 0. Sau khi dữ
liệu được nhập, chương trình sẽ hiển thị tổng số tiền lương, thuế tiểu bang, thuế liên
bang, thuế thu nhập và thanh toán ròng.
Xác thực đầu vào: Không chấp nhận số âm cho bất kỳ mục nào đã nhập. Không chấp
nhận các giá trị khấu trừ của tiểu bang, liên bang hoặc thuế thu nhập lớn hơn tổng lương.
Nếu tổng thuế tiểu bang + thuế liên bang + thuế thu nhập cho bất kỳ nhân viên nào lớn
hơn tổng lương, hãy in thông báo lỗi và yêu cầu người dùng nhập lại dữ liệu cho nhân
viên đó.
*/

#include <iostream>
using namespace std;

int main()
{
    int employeeCode;
    double salary, totalSalary,
        stateTax,
        federalTax,
        FICAWithholds,
        netAssets,
        totalTax = 0,
        totalStateTax = 0,
        totalFICAWithholds = 0,
        totalFedaralTax = 0,
        sum = 0;
    bool flag = true;

    do
    {
        cout << "=====================" << endl;
        cout << "Nhap ma nhan vien #";
        cin >> employeeCode;
        if (employeeCode == 0)
        {
            break;
        }
        do
        {
            cout << "Nhap tong luong: ";
            cin >> salary;

            cout << "Nhap thue tieu bang (%): ";
            cin >> stateTax;

            cout << "Nhap thue lien bang (%): ";
            cin >> federalTax;

            cout << "Nhap FICA withholdings: ";
            cin >> FICAWithholds;

            if (salary < 0 || stateTax < 0 || federalTax < 0 || FICAWithholds < 0)
            {
                cout << "Gia tri nhap vao khong hop le." << endl;
            }
            if (FICAWithholds > salary)
            {
                cout << "FICA Withholds khong duoc lon hon thu nhap." << endl;
            }
            sum = salary * (stateTax / 100) + salary * (federalTax / 100) + FICAWithholds;
            if (sum > salary)
            {
                cout << "Tong thue khong duoc lon hon tong luong." << endl;
            }
        } while (salary <= 0 || stateTax < 0 || federalTax < 0 || FICAWithholds < 0 || FICAWithholds > salary || sum > salary);

        totalSalary += salary;
        totalStateTax += salary * stateTax / 100;
        totalFedaralTax += salary * federalTax / 100;
        totalFICAWithholds += FICAWithholds;
        totalTax += totalStateTax + totalFedaralTax + totalFICAWithholds;
    } while (flag);
    netAssets = (totalSalary - totalTax);
    cout << "=================================================" << endl;
    cout << "Tong luong: " << totalSalary << endl;
    cout << "Tong thue tieu bang: " << totalStateTax << endl;
    cout << "Tong thue lien bang: " << totalFedaralTax << endl;
    cout << "Tong thue FICA withholdings: " << totalFICAWithholds << endl;
    cout << "Tong thue: " << totalTax << endl;
    cout << "Tong tien rong: " << netAssets << endl;
}