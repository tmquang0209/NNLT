#include <iostream>

using namespace std;

int inputValue(int);
void selectionSort(int *, int);
int Distribution(int *, int);

int main()
{
    int size;
    float average = 0;

    cout << "Nhap so phan tu cua mang: ";
    size = inputValue(size);

    int *arr;
    arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        *(arr + i) = inputValue(*(arr + i));
        average += *(arr + i);
    }
    selectionSort(arr, size);
    cout << "GTTB = " << average / size << endl;
    cout << "Trung vi = " << *(arr + size / 2) << endl;
    cout << "Phan bo cua cac gia tri: " << Distribution(arr, size);
}

int inputValue(int num)
{
    while (!(cin >> num) || num < 0)
    {
        cout << "Nhap lai: ";
        cin.clear();
        cin.ignore(256, '\n');
    }
    return num;
}

void selectionSort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (*(arr + j) < *(arr + min))
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = *(arr + i);
            *(arr + i) = *(arr + min);
            *(arr + min) = temp;
        }
    }
}

int Distribution(int *arr, int size)
{
    int maxCount = 0, value;
    for (auto i = 0; i < size; i++)
    {
        int count = 0;
        for (auto j = 0; j < size; j++)
        {

            if (*(arr + i) == *(arr + j))
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            value = *(arr + i);
            maxCount = count;
        }
    }
    if (maxCount < 2)
    {
        return -1;
    }
    size = value;
    return maxCount;
}