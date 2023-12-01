/*
Viết chương trình mô phỏng một cuộc thi xổ số. Chương trình cần dùng một mảng gồm
năm số nguyên được đặt tên là lottery và cần tự sinh ra một số ngẫu nhiên trong khoảng
từ 0 đến 9 cho mỗi phần tử trong mảng này. Người dùng cũng phải nhập năm chữ số,
số này sẽ được lưu trữ trong một mảng số nguyên khác có tên là user. Chương trình sẽ
so sánh các phần tử tương ứng trong hai mảng và lưu số lượng số so khớp. Ví dụ: dưới
đây là mảng lottery và mảng user với các các số mẫu cho trước. Ta thấy, ở đây có hai
chữ số so khớp (phần tử 2 và 4).
Mảng lottery = {7,4,9,1,3}
Mảng user = {4,2,9,7,3}
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ELEMENT = 5;

void createRandomArray(int[]);
void userArray(int[]);
void outputArray(int[]);
int inputValue(int num, int rank);
void compareArrays(int[], int[]);

int main()
{
    int arrRandom[ELEMENT],
        arrUser[ELEMENT];
    createRandomArray(arrRandom);
    //! Dung de test truong hop dung
    outputArray(arrRandom);
    cout << endl;
    //! End test
    userArray(arrUser);
    cout << "Loterry: ";
    outputArray(arrRandom);
    cout << endl
         << "User: ";
    outputArray(arrUser);
    compareArrays(arrRandom, arrUser);
    return 0;
}

void createRandomArray(int arr[])
{
    srand(time(0));
    for (int i = 0; i < ELEMENT; i++)
    {
        arr[i] = rand() % 9;
    }
}

void userArray(int arr[])
{
    for (int i = 0; i < ELEMENT; i++)
    {
        arr[i] = inputValue(arr[i], i + 1);
    }
}

void outputArray(int arr[])
{
    for (int i = 0; i < ELEMENT; i++)
    {
        cout << arr[i] << " ";
    }
}

int inputValue(int num, int rank)
{
    do
    {
        cout << "Arr[" << rank << "] = ";
        cin >> num;
    } while (num < 0 || num > 9);
    return num;
}

void compareArrays(int arrRand[], int arrUser[])
{
    int count = 0;

    for (int i = 0; i < ELEMENT; i++)
    {
        if (arrRand[i] == arrUser[i])
            count++;
    }

    if (count == ELEMENT)
        cout << "Ban da trung 5 so. Chien thang";
    else
        cout << "Ban da dung " << count << " so. ";
}