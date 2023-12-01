/*
Viết chương trình tính số dư của tài khoản tiết kiệm tại thời điểm cuối kỳ. Chương trình
sẽ hỏi người dùng về lãi suất hàng năm, số dư ban đầu và số tháng đã trôi qua kể từ khi
tài khoản được thành lập. Sau đó, một vòng lặp sẽ lặp lại mỗi tháng một lần, thực hiện
như sau:
A. Hỏi người dùng số tiền gửi vào tài khoản trong tháng. (Không chấp nhận số âm.)
Số tiền này phải được cộng vào số dư.
B. Hỏi người dùng số tiền rút từ tài khoản trong tháng. (Không chấp nhận số âm.)
Số tiền này phải được trừ vào số dư.
C. Tính tiền lãi hàng tháng. Lãi suất hàng tháng là lãi suất hàng năm chia cho 12.
Nhân lãi suất hàng tháng với số dư, và cộng kết quả với số dư.
Sau lần lặp cuối cùng, chương trình sẽ hiển thị số dư cuối kỳ, tổng số tiền gửi, tổng số
tiền rút và tổng tiền lãi thu được.
Chú ý: Nếu số dư âm được tính tại bất kỳ thời điểm nào, một thông báo sẽ hiển thị cho
biết tài khoản đã bị đóng và vòng lặp sẽ kết thúc
*/

#include <iostream>

using namespace std;

int main()
{
    float interestRate, initialBalance, depositBalance, withdrawBalance, interestPerMonth;
    int numOfMonths;

    cout << "Nhap vao lai suat 1 nam: ";
    cin >> interestRate;

    cout << "So du ban dau: ";
    cin >> initialBalance;

    cout << "So thang: ";
    cin >> numOfMonths;

    interestRate /= 12;
    for (int i = 1; i <= numOfMonths; i++)
    {
        cout << "Nhap vao so tien gui vao tai khoan: ";
        cin >> depositBalance;
        initialBalance += depositBalance;

        cout << "Nhap vao so tien rut tai khoan: ";
        cin >> withdrawBalance;
        initialBalance -= withdrawBalance;

        interestPerMonth = (interestRate / 100 * initialBalance);
        cout << "So tien lai hang thang: " << interestPerMonth << endl;
        initialBalance += interestPerMonth;
    }

    cout << "So du cuoi ky: " << initialBalance;
}