/*
Viết chương trình tạo một số ngẫu nhiên và yêu cầu người dùng đoán số đó là gì. Nếu
dự đoán của người dùng cao hơn số ngẫu nhiên, chương trình sẽ hiển thị "Rất cao, hãy
thử lại!" Nếu dự đoán của người dùng thấp hơn số ngẫu nhiên, chương trình sẽ hiển thị
"Rất thấp, hãy thử lại!" Chương trình nên sử dụng một vòng lặp lặp lại cho đến khi
người dùng đoán đúng số ngẫu nhiên.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    int n = rand() % 100 + 1; // random 1 --> 100;
    int guess;
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
    } while (guess != n);
}