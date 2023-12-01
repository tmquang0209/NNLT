#include <iostream>
#include <vector>

using namespace std;

void sequentialSearch(vector<int> arr, int target);
void inputValidate(int &);

int main()
{
    vector<int> arr = {13579, 26791, 26792, 33445, 55555,
                       62483, 77777, 79422, 85647, 93121};
    int target;
    cout << "Nhap so: ";
    inputValidate(target);
    sequentialSearch(arr, target);
}

void inputValidate(int &num)
{
    while (!(cin >> num) || num < 10000 || num > 99999)
    {
        cout << "Nhap lai: ";
    }
}

void sequentialSearch(vector<int> arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            cout << "So " << target << " co trong danh sach trung thuong " << endl;
            return;
        }
    }
    cout << target << " khong nam trong danh sach" << endl;
}