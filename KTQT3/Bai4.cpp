#include <iostream>

using namespace std;

double inputValue(double);
int inputValue(int);
void selectionSort(double[], int[], int);
void output(double[], int[], int);

int main()
{
    int size;
    cout << "Nhap so phan tu cua mang: ";
    size = inputValue(size);
    double arr[size];
    int id[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Nhap thoi gian cho VDV #" << i + 1 << ": ";
        arr[i] = inputValue(arr[i]);
        id[i] = i + 1;
    }
    selectionSort(arr, id, size);
    cout << "Nguoi ve nhat la VDV #" << id[0] << " voi thoi gian " << arr[0] << endl;
    output(arr, id, size);
}

void output(double arr[], int id[], int size)
{
    cout << "Thu hang\tMa so\t\tThanh tich" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << "\t\t" << id[i] << "\t\t" << arr[i] << endl;
    }
}

void selectionSort(double arr[], int id[], int size)
{
    int min, temp;
    for (int i = 0; i < size; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
        swap(id[i], id[min]);
    }
}

int inputValue(int num)
{
    while (!(cin >> num) || num < 0 || num > 100)
    {
        cout << "Nhap lai: ";
        cin.clear();
        cin.ignore(256, '\n');
    }
    return num;
}

double inputValue(double num)
{
    while (!(cin >> num) || num < 0)
    {
        cout << "Nhap lai: ";
        cin.clear();
        cin.ignore(256, '\n');
    }
    return num;
}