/*
1. Giá trị mảng lớn nhất / nhỏ nhất
Viết chương trình cho phép người dùng nhập mười giá trị vào một mảng. Sau đó,
chương trình sẽ hiển thị các giá trị lớn nhất và nhỏ nhất được lưu trữ trong mảng.
*/

#include <iostream>
using namespace std;

int findMax(int[]);
int findMin(int[]);

int main()
{
    int arr[10];
    int max, min;
    for (int i = 0; i < 10; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }
    max = findMax(arr);
    min = findMin(arr);
    cout << "Gia tri lon nhat trong mang la: " << max << endl;
    cout << "Gia tri nho nhat trong mang la: " << min << endl;
}

int findMax(int arr[])
{
    int max = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[])
{
    int min = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}