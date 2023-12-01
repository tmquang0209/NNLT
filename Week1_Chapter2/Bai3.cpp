#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float scoreTest1, scoreTest2, scoreTest3, scoreTest4, scoreTest5, average;
    cout << "Nhap diem bai thu 1: ", cin >> scoreTest1;
    cout << "Nhap diem bai thu 2: ", cin >> scoreTest2;
    cout << "Nhap diem bai thu 3: ", cin >> scoreTest3;
    cout << "Nhap diem bai thu 4: ", cin >> scoreTest4;
    cout << "Nhap diem bai thu 5: ", cin >> scoreTest5;

    average = (scoreTest1 + scoreTest2 + scoreTest3 + scoreTest4 + scoreTest5) / 5;
    cout << "Trung binh 5 bai kiem tra: " << setprecision(1) << fixed << average;
    return 0;
}