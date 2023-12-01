/*
Nâng cao chương trình mà bạn đã viết cho bài 20 để nó lưu giữ số lần người dùng đoán.
Khi người dùng đoán đúng số ngẫu nhiên, chương trình sẽ hiển thị số người đoán.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    int n = rand() % 100 + 1; // random 1 --> 100;
    int guess, count = 0;
    cout << n << endl;
    do
    {
        cout << "Nhap so 0 < n <= 100: ";
        cin >> guess;
        if (guess > n)
        {
            cout << "Rat cao, hay thu lai!" << endl;
        }
        else if (guess < n)
        {
            cout << "Rat thap, hay thu lai!" << endl;
        }
        count++;
    } while (guess != n);
    cout << "So lan doan la: " << count << endl;
}