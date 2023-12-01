#include <iostream>
using namespace std;

const int ROW = 18;

void selectionSort(int[]);
void binarySearch(int[], int);
void output(int[]);

int main()
{
    int arr[ROW] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                    8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                    1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int target, result;

    selectionSort(arr);
    cout << "Nhap STK: ";
    cin >> target;
    binarySearch(arr, target);
}

void selectionSort(int arr[])
{
    int min, temp;
    for (int i = 0; i < ROW - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < ROW; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void binarySearch(int arr[], int target)
{
    int left = 0, right = ROW - 1, mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == target)
        {
            cout << "STK " << target << " co trong danh sach " << endl;
            return;
        }
        else if (arr[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    cout << "STK " << target << " khong co trong danh sach" << endl;
}

void output(int arr[])
{
    for (int i = 0; i < ROW; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}