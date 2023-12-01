#include <iostream>

using namespace std;

const int ROW = 18;

int sequentialSearch(int[], int);

int main()
{
    int arr[ROW] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                    8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                    1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int target, result;
    cout << "Nhap STK: ";
    cin >> target;
    result = sequentialSearch(arr, target);
    if (result == -1)
        cout << "Khong tim thay STK " << target << endl;
    else
        cout << "STK " << target << " co vi tri " << result << endl;
}

int sequentialSearch(int arr[], int target)
{
    for (int i = 0; i < ROW; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}