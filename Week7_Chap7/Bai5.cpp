#include <iostream>

using namespace std;

const int MONTH = 12;

void selectionSort(int[], int[]);
void outputArray(int[], int[]);

int main()
{
    int amountOfRain[MONTH] = {45, 467, 123, 34, 21, 54, 12, 57, 456, 67, 45, 32};
    int month[MONTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // for (int i = 0; i < MONTH; i++)
    // {
    //     cout << "Nhap luong mua thang " << month[i] << ": ";
    //     cin >> amountOfRain[i];
    // }

    selectionSort(amountOfRain, month);
    outputArray(amountOfRain, month);
}

void selectionSort(int arr[], int month[])
{
    int max, temp;
    for (int i = 0; i < MONTH - 1; i++)
    {
        max = i;
        for (int j = i + 1; j < MONTH; j++)
        {
            if (arr[j] > arr[max])
                max = j;
        }
        temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;

        temp = month[i];
        month[i] = month[max];
        month[max] = temp;
    }
}

void outputArray(int arr[], int month[])
{
    for (int i = 0; i < MONTH; i++)
    {
        cout << "Thang " << month[i] << " co " << arr[i] << " mm mua" << endl;
    }
}