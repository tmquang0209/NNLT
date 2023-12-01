#include <iostream>

using namespace std;

const int ROW = 5,
          COL = 4;

string inputValue(string, int);
double inputValue(double, int);
string letterGrade(double[][COL], int row);
double calcAverage(double[][COL], int row);
void output(string[], string[], double[]);

int main()
{
    //! Example Data
    // string studentName[5] = {"Nguyen Van A", "Nguyen Van B", "Nguyen Van C", "Nguyen Van D", "Nguyen Van E"};
    // string scoreChar[5];
    // double scoreNumber[ROW][COL] =
    //     {{100, 100, 90, 80},
    //      {90, 80, 70, 60},
    //      {80, 70, 60, 50},
    //      {70, 60, 50, 40},
    //      {60, 50, 40, 30}};
    // double averageScore[ROW];
    // for (int i = 0; i < ROW; i++)
    // {
    //     averageScore[i] = calcAverage(scoreNumber, i);
    //     scoreChar[i] = letterGrade(scoreNumber, i);
    // }
    //! End Example Data

    string studentName[ROW],
        scoreChar[ROW];
    double scoreNumber[ROW][COL], averageScore[ROW];
    for (int i = 0; i < ROW; i++)
    {
        studentName[i] = inputValue(studentName[i], (i + 1));
        for (int j = 0; j < COL; j++)
        {
            scoreNumber[i][j] = inputValue(scoreNumber[i][j], j + 1);
        }
        averageScore[i] = calcAverage(scoreNumber, i);
        scoreChar[i] = letterGrade(scoreNumber, i);
    }
    output(studentName, scoreChar, averageScore);
}

string inputValue(string str, int order)
{
    cout << "Nhap ten hoc sinh " << order << ": ";
    cin >> str;
    return str;
}

double inputValue(double value, int order)
{
    do
    {
        cout << "Nhap diem mon " << order << ": ";
        cin >> value;
        if (value < 0 || value > 100)
            cout << "So khong hop le. Nhap lai [0-100]" << endl;
    } while (value < 0);
    return value;
}

double calcAverage(double arr[][COL], int row)
{
    double total = 0;
    double min = arr[row][0];
    // tim min
    for (int i = 0; i < COL; i++)
    {
        if (arr[row][i] < min)
            min = arr[row][i];
    }

    for (int i = 0; i < COL; i++)
    {
        if (arr[row][i] != min)
            total += arr[row][i];
    }
    return (double)(total / (COL - 1));
}

string letterGrade(double scoreNumber[][COL], int row)
{
    double average = calcAverage(scoreNumber, row);

    if (average >= 90)
        return "A";
    else if (average >= 80)
        return "B";
    else if (average >= 70)
        return "C";
    else if (average >= 60)
        return "D";
    else
        return "F";
}

void output(string studentName[], string scoreLetter[], double averageScore[])
{
    cout << "Ten\t\t\tDiem TB\t\tXep loai" << endl;
    for (int i = 0; i < ROW; i++)
    {
        cout << studentName[i] << "\t\t" << averageScore[i] << "\t\t" << scoreLetter[i] << endl;
    }
}