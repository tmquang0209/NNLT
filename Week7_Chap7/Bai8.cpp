#include <iostream>

using namespace std;

void sequentialSearch(int arr[], int target);
void binarySearch(int arr[], int target);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int target = 10;

    sequentialSearch(arr, target);
    binarySearch(arr, target);
    return 0;
}

void sequentialSearch(int arr[], int target)
{
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] == target)
        {
            cout << "Tim kiem tuan tu can " << i << " lan de tim so " << target << endl;
            break;
        }
    }
}

void binarySearch(int arr[], int target)
{
    int low = 0;
    int high = 20;
    int mid;
    int i = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            break;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
            i++;
        }
        else
        {
            high = mid - 1;
            i++;
        }
    }
    cout << "Tim kiem nhi phan can " << i << " lan de tim so " << target << endl;
}