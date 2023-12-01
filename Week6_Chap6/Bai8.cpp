#include <iostream>
using namespace std;

int input(int);

int main()
{
    int row, col;
    cout << "Nhap so dong: ";
    row = input(row);

    int arr[row][row];
    // int arr[3][3] = {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << "Nhap phan tu [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    int sum = 0, result;

    // tinh tong tung hang
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            sum += arr[i][j];
        }
        if (sum != 15)
        {
            cout << "Day khong phai la Lo Shu Magic Square";
            return 0;
        }

        sum = 0;
    }

    // tinh tong tung cot
    sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        if (sum != 15)
        {
            cout << "Day khong phai la Lo Shu Magic Square";
            return 0;
        }
        sum = 0;
    }

    // tinh tong tung duong cheo chinh
    sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum += arr[i][i];
    }
    if (sum != 15)
    {
        cout << "Day khong phai la Lo Shu Magic Square";
        return 0;
    }

    // tinh tong tung duong cheo phu
    sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum += arr[i][row - i - 1];
    }
    if (sum != 15)
    {
        cout << "Day khong phai la Lo Shu Magic Square";
        return 0;
    }

    cout << "Day la mot Lo Shu Magic Square";
}

int input(int n)
{
    cin >> n;
    while (n < 0)
    {
        cout << "Gia tri khong hop le. Nhap lai: ";
        cin >> n;
    }
    return n;
}