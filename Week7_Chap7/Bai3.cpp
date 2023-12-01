#include <iostream>
#include <vector>

using namespace std;

void binarySearch(vector<int>, int);
void inputValidate(int &);

int main()
{
    vector<int> arr = {13579, 26791, 26792, 33445, 55555,
                       62483, 77777, 79422, 85647, 93121};
    int target;
    cout << "Nhap so can tim: ";
    inputValidate(target);
    binarySearch(arr, target);
}

void inputValidate(int &num)
{
    while (!(cin >> num) || num < 10000 || num > 99999)
    {
        cout << "Nhap lai: ";
    }
}

void binarySearch(vector<int> arr, int target)
{
    int left = 0, right = arr.size() - 1, mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == target)
        {
            cout << "So " << target << " co trong danh sach trung thuong " << endl;
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
    cout << target << " khong nam trong danh sach" << endl;
}