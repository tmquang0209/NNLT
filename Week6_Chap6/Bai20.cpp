#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void readFile(vector<string> &, string);
void readFile(vector<double> &, string);
void findMinAverage(vector<double> &, vector<string> &);
void findMaxAverage(vector<double> &, vector<string> &);
void averageGasPerMonth(vector<double> &, vector<string> &);
int countWeek(vector<string> &, int);

int main()
{
    vector<double> average;
    vector<string> month;

    readFile(average, "1994_Weekly_Gas_Averages");
    readFile(month, "1994_Weekly_Gas_Averages");

    findMinAverage(average, month);
    findMaxAverage(average, month);
    averageGasPerMonth(average, month);
}

void findMinAverage(vector<double> &arr, vector<string> &month)
{
    int index;
    double min = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            index = i;
        }
    }
    cout << "Doanh thu tuan nho nhat la " << min << " tai tuan thu " << countWeek(month, index) << " thang " << stoi(month[index]) << endl;
}

void findMaxAverage(vector<double> &arr, vector<string> &month)
{
    int index;
    double max = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    cout << "Doanh thu tuan lon nhat la " << max << " tai tuan thu " << countWeek(month, index) << " thang " << stoi(month[index]) << endl;
}

void averageGasPerMonth(vector<double> &arr, vector<string> &month)
{
    double sum = 0;
    int index;
    for (int i = 1; i <= 12; i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (stoi(month[j]) == i)
            {
                sum += arr[j];
                index = j;
            }
        }
        cout << "Doanh thu thang " << i << " la " << sum / countWeek(month, index) << endl;
        sum = 0;
    }
}

void readFile(vector<double> &arr, string fileName)
{
    ifstream inFile;
    double num;
    int i = 0;
    inFile.open("./FileData/" + fileName + ".txt");
    if (!inFile)
    {
        cout << "Khong mo duoc file " << fileName << endl;
        return;
    }
    while (inFile >> num)
    {
        if (i++ % 2 != 0)
            arr.push_back(num);
    }
    inFile.close();
}

void readFile(vector<string> &arr, string fileName)
{
    ifstream inFile;
    string num;
    int i = 0;
    inFile.open("./FileData/" + fileName + ".txt");
    if (!inFile)
    {
        cout << "Khong mo duoc file " << fileName << endl;
        return;
    }
    while (getline(inFile, num))
    {
        arr.push_back(num);
    }
    inFile.close();
}

int countWeek(vector<string> &arr, int index)
{
    int count = 0;
    for (int i = 0; i <= index; i++)
    {
        if (stoi(arr[i]) == stoi(arr[index]))
            count++;
    }
    return count;
}