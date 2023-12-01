/*
Viết một hàm có đối số là 1 mảng các số nguyên và kích thước của mảng. Hàm phải
tạo một bản sao của mảng, sao cho các giá trị phần tử phải được đảo ngược trong bản
sao. Hàm sẽ trả về một con trỏ đến mảng mới. Thể hiện hàm để thành 1 chương trình
hoàn chỉnh.
*/

#include <iostream>

using namespace std;

void reverse(int *, int);

int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int *arr;
    arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> *(arr + i);
    }

    reverse(arr, n);

    delete[] arr;
}

void reverse(int *arr, int size)
{
    int *arr2;
    arr2 = new int[size];
    for (int i = 0; i < size; i++)
    {
        *(arr2 + i) = *(arr + i);
    }

    for (int i = 0; i < size; i++)
    {
        *(arr + i) = *(arr2 + size - i - 1);
    }

    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    delete[] arr2;
}