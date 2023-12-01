#include <iostream>
#include <string>

using namespace std;

const int ROW_AND_COL = 3;

void changeArray(char[][ROW_AND_COL], int, int, char);
bool checkArray(char[][ROW_AND_COL], int, int);
void autoFill(char[][ROW_AND_COL]);
void outputArray(char[][ROW_AND_COL]);
void inputValidate(char[][ROW_AND_COL], int &, int &, int);
bool checkWin(char[][ROW_AND_COL]);
bool checkIndex(char[][ROW_AND_COL], int, int);

int main()
{
    char arr[ROW_AND_COL][ROW_AND_COL];
    char user1, user2;
    bool flag = true;
    int rowIndex, colIndex;

    autoFill(arr);
    outputArray(arr);

    do
    {
        inputValidate(arr, rowIndex, colIndex, 1);
        arr[rowIndex][colIndex] = 'X';
        outputArray(arr);
        if (checkWin(arr))
        {
            cout << "Nguoi choi 1 thang" << endl;
            break;
        }

        inputValidate(arr, rowIndex, colIndex, 2);
        arr[rowIndex][colIndex] = 'O';
        outputArray(arr);
        if (checkWin(arr))
        {
            cout << "Nguoi choi 2 thang" << endl;
            break;
        }

    } while (flag);
}

bool checkIndex(char arr[][ROW_AND_COL], int row, int col)
{
    if (arr[row][col] == '*')
        return true;
    return false;
}

bool checkWin(char arr[][ROW_AND_COL])
{
    int count = 0;

    // check row
    for (int i = 0; i < ROW_AND_COL; i++)
    {
        for (int j = 0; j < ROW_AND_COL; j++)
        {
            if (arr[i][j] == arr[i][0] && arr[i][j] != '*')
                count++;
        }
        if (count == ROW_AND_COL)
            return true;
    }

    // check col
    count = 0;
    for (int i = 0; i < ROW_AND_COL; i++)
    {
        for (int j = 0; j < ROW_AND_COL; j++)
        {
            if (arr[j][i] == arr[0][i] && arr[j][i] != '*')
                count++;
        }
        if (count == ROW_AND_COL)
            return true;
    }

    // check duong cheo chinh
    count = 0;
    for (int i = 0; i < ROW_AND_COL; i++)
    {
        if (arr[i][i] == arr[0][0] && arr[i][i] != '*')
            count++;
    }
    if (count == ROW_AND_COL)
        return true;

    // check duong cheo phu
    count = 0;
    for (int i = 0; i < ROW_AND_COL; i++)
    {
        if (arr[i][ROW_AND_COL - 1 - i] == arr[0][ROW_AND_COL - 1] && arr[i][ROW_AND_COL - 1 - i] != '*')
            count++;
    }
    if (count == ROW_AND_COL)
        return true;

    return false;
}

void inputValidate(char arr[][ROW_AND_COL], int &row, int &col, int num)
{
    do
    {
        cout << "Moi user #" << num << " nhap chi so dong: ";
        cin >> row;
        cout << "Moi user #" << num << " nhap chi so cot: ";
        cin >> col;

    } while (row < 0 || col < 0 || row > ROW_AND_COL - 1 || col > ROW_AND_COL - 1 || !checkIndex(arr, row, col));
}

void autoFill(char arr[][ROW_AND_COL])
{
    for (int i = 0; i < ROW_AND_COL; i++)
    {
        for (int j = 0; j < ROW_AND_COL; j++)
        {
            arr[i][j] = '*';
        }
    }
}

void outputArray(char arr[][ROW_AND_COL])
{
    for (int i = 0; i < ROW_AND_COL; i++)
    {
        for (int j = 0; j < ROW_AND_COL; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}