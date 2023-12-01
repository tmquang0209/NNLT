/*
Viết chương trình nhập vào một danh sách các số nguyên  và lưu trữ trong mảng động được khởi tạo bởi một biến con trỏ. Viết một hàm nhận vào một con trỏ kiểu nguyên (trỏ đến một mảng nào đó) và một số nguyên cho biết số phần tử của mảng đầu vào , trả lại một con trỏ trỏ đến mảng động chứa các số trong mảng đầu vào nhưng theo thứ tự ngược lại.  Sử dụng hàm trên để in danh sách các số đã nhập theo thứ tự ngược lại.
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

    display(arr, n);

    delete[] arr;
}

void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> *(arr + i);
    }

    for (int i = size - 1; i >= 0; i--)
    {
        cout << *(arr + i) << " ";
    }
}