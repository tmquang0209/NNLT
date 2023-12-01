#include <iostream>

using namespace std;

const int ROW = 3,
          COL = 5;

void getTotal(int[][COL]);
void getAverage(int[][COL]);
void getRowtotal(int[][COL]);
void getColumntotal(int[][COL]);
void getHighestInRow(int[][COL]);
void getLowestInRow(int[][COL]);
void inputValidate(int &, int);

int main()
{
    int arr[ROW][COL] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}};
    cout << "===Tinh tong===" << endl;
    getTotal(arr);
    cout << "===Tinh trung binh===" << endl;
    getAverage(arr);
    cout << "===Tinh tong cua hang===" << endl;
    getRowtotal(arr);
    cout << "===Tinh tong cua cot===" << endl;
    getColumntotal(arr);
    cout << "===Tim gia tri lon nhat tren 1 hang===" << endl;
    getHighestInRow(arr);
    cout << "===Tim gia tri nho nhat tren 1 hang===" << endl;
    getLowestInRow(arr);
}

void getTotal(int arr[ROW][COL])
{
    int total = 0;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            total += arr[i][j];
        }
    }
    cout << "Tong cac so trong mang la: " << total << endl;
}

void getAverage(int arr[ROW][COL])
{
    int total = 0;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            total += arr[i][j];
        }
    }
    cout << "Trung binh cac so trong mang: " << total / (ROW * COL) << endl;
}

void getRowtotal(int arr[ROW][COL])
{
    int total = 0, num;

    cout << "Nhap chi so dong: ";
    inputValidate(num, ROW);

    for (int i = 0; i < COL; i++)
    {
        total += arr[num][i];
    }
    cout << "Tong cac so tren hang " << num << " la: " << total << endl;
}

void getColumntotal(int arr[ROW][COL])
{
    int total = 0, num;

    cout << "Nhap so cot: ";
    inputValidate(num, COL);

    for (int i = 0; i < ROW; i++)
    {
        total += arr[i][num];
    }
    cout << "Tong cac so tren cot " << num << " la: " << total << endl;
}

void getHighestInRow(int arr[ROW][COL])
{
    int num, max = 0;

    cout << "Nhap chi so dong: ";
    inputValidate(num, ROW);

    for (int i = 0; i < COL; i++)
    {
        if (arr[num][i] > max)
        {
            max = arr[num][i];
        }
    }
    cout << "So lon nhat tren hang " << num << " la: " << max << endl;
}

void getLowestInRow(int arr[ROW][COL])
{
    int num, min;

    cout << "Nhap chi so dong: ";
    inputValidate(num, COL);

    min = arr[num][0];
    for (int i = 1; i < COL; i++)
    {
        if (arr[num][i] < min)
        {
            min = arr[num][i];
        }
    }

    cout << "So nho nhat tren hang " << num << " la: " << min << endl;
}

void inputValidate(int &num, int max)
{
    do
    {
        cin >> num;
        if (num < 0 || num >= max)
        {
            cout << "Nhap lai: ";
        }
    } while (num < 0 || num >= max);
}