#include <iostream>

using namespace std;

void bubbleSort(int[]);
void selectionSort(int[]);
void output(int[]);

int main()
{
    int arr1[10] = {4, 5, 6, 2, 8, 9, 3, 1, 11, 15};
    int arr2[10] = {4, 5, 6, 2, 8, 9, 3, 1, 10, 18};

    cout << "Bubble Sort: " << endl;
    bubbleSort(arr1);
    cout << "Selection Sort: " << endl;
    selectionSort(arr2);
}

void bubbleSort(int arr[])
{
    int temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        output(arr);
    }
}

void selectionSort(int arr[])
{
    int temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        output(arr);
    }
}

void output(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}