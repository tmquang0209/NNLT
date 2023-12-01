/*
Viết một hàm cấp phát động một mảng số nguyên. Hàm nhận một đối số là số nguyên
cho biết số lượng phần tử cần cấp phát. Hàm sẽ trả về một con trỏ đến mảng.
*/

#include <iostream>
using namespace std;

void createArray(int *&arr, int n)
{
    arr = new int[n];
}

int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int *arr;
    createArray(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Mang vua nhap: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}