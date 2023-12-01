/*
Viết một hàm có đối số là một mảng int và kích thước của mảng. Hàm sẽ tạo một mảng
mới lớn hơn một phần tử so với mảng đối số. Phần tử đầu tiên của mảng mới phải được
đặt thành 0. Phần tử 0 của mảng đối số phải được sao chép sang phần tử 1 của mảng
mới, phần tử 1 của mảng đối số phải được sao chép sang phần tử 2 của mảng mới, v.v. .
Hàm sẽ trả về một con trỏ đến mảng mới.
*/

#include <iostream>

using namespace std;

void display(int *, int);

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

    display(arr, n);

    delete[] arr;
}

void display(int *arr, int size)
{
    int *arr2;
    arr2 = new int[size + 1];
    *arr2 = 0;
    for (int i = 0; i < size; i++)
    {
        *(arr2 + i + 1) = *(arr + i);
    }

    for (int i = 0; i < size + 1; i++)
    {
        cout << *(arr2 + i) << " ";
    }
    delete[] arr2;
}