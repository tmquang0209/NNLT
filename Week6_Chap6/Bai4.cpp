/*
4. Lớn hơn n (Bắt buộc)
Trong chương trình, hãy viết một hàm chấp nhận ba đối số: một mảng, kích thước của
mảng và một số n. Giả sử mảng chứa các số nguyên. Hàm cần hiển thị tất cả các số
trong mảng lớn hơn số n.
*/

#include <iostream>
using namespace std;

int main()
{
    int n, size, count = 0;
    cout << "Nhap kich thuoc mang: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
    cout << "Nhap so n: ";
    cin >> n;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > n)
        {
            count++;
            cout << arr[i] << " ";
        }
    }
    if (count == 0)
        cout << "Khong co so nao trong mang lon hon " << n;
    return 0;
}