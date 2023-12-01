/*
Viết một chương trình yêu cầu người dùng nhập số tiền mà họ đã lập ngân sách cho
một tháng. Sau đó, một vòng lặp sẽ hỏi người dùng nhập từng chi phí của họ trong
tháng và tổng số tiền hiện có. Khi vòng lặp kết thúc, chương trình sẽ hiển thị số tiền mà
người dùng vượt quá hoặc dư ngân sách.
*/

#include <iostream>

using namespace std;

int main()
{
    float budgetAmount,   // tong chi phi 1 thang
        expenseTotal = 0, // tong chi phi da dung
        expense,          // chi phi,
        budgetResult;     // tinh so tien du/am

    int numOfExpenses; // So chi phi 1 thang;

    cout << "Nhap so chi phi 1 thang: ";
    cin >> budgetAmount;

    cout << "Nhap so chi phi: ";
    cin >> numOfExpenses;

    for (int i = 0; i < numOfExpenses; i++)
    {
        cout << "Nhap chi phi thu " << i + 1 << ": ";
        cin >> expense;
        expenseTotal += expense;
    }

    budgetResult = budgetAmount - expenseTotal;

    if (budgetResult == 0)
    {
        cout << "Ban da dung het " << budgetAmount << " dong.";
    }
    else if (budgetResult > 0)
    {
        cout << "Ban da dung " << expenseTotal << " dong.";
        cout << "Ban con " << budgetResult << " dong.";
    }
    else if (budgetResult < 0)
    {
        cout << "Ban da dung " << expenseTotal << " dong.";
        cout << "Ban da vuot qua " << -budgetResult << " dong.";
    }
}