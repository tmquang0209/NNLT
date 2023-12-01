#include <iostream>

using namespace std;

void bubbleSort(int arr[]);
void selectionSort(int arr[]);

int main()
{
    int arr[] = {23, 43, 12, 54, 24, 54, 21, 65, 78, 34,
                 23, 56, 63, 87, 89, 67, 80, 89, 12, 5};
    int target = 10;

    bubbleSort(arr);
    selectionSort(arr);

    return 0;
}

void bubbleSort(int arr[])
{
    int temp, count = 0;
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count++;
            }
        }
    }
    cout << "Sap xep noi bot can " << count << " lan" << endl;
}

void selectionSort(int arr[])
{
    int min, temp, count = 0;
    for (int i = 0; i < 20 - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < 20; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        count++;
    }
    cout << "Sap xep lua chon can " << count << " lan" << endl;
}