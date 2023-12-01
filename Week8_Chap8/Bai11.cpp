/*
Viết một hàm có đối số là một mảng int và kích thước của mảng. Hàm sẽ tạo một mảng
mới có kích thước gấp đôi kích thước của mảng đối số. Hàm nên sao chép nội dung của
mảng đối số sang mảng mới và khởi tạo các phần tử chưa sử dụng của mảng thứ hai
bằng 0. Hàm sẽ trả về một con trỏ đến mảng mới. Thể hiện hàm để thành 1 chương
trình hoàn chỉnh.
*/

#include <iostream>

using namespace std;

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
    arr2 = new int[size * 2];
    for (int i = 0; i < size * 2; i++)
    {
        *(arr2 + i) = 0;
    }
    for (int i = 0; i < size; i++)
    {
        *(arr2 + i + 1) = *(arr + i);
    }

    for (int i = 0; i < size * 2; i++)
    {
        cout << *(arr2 + i) << " ";
    }
    delete[] arr2;
}