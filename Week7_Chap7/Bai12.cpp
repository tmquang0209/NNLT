#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void readFile(vector<int> &, vector<double> &);
void writeFile(vector<int> &, vector<double> &);
void selectionSort(vector<double> &, vector<int> &);
void calcAverage(vector<double> &, vector<double> &, vector<int> &);
void output(vector<double> &);
void output(vector<int> &);

int main()
{
    vector<int> listMonth = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    vector<int> arrMonth;
    vector<double> arrAverageGas;
    vector<double> arrAveragePerMonth;

    readFile(arrMonth, arrAverageGas);
    calcAverage(arrAverageGas, arrAveragePerMonth, arrMonth);
    selectionSort(arrAveragePerMonth, listMonth);
    output(listMonth);
    writeFile(listMonth, arrAveragePerMonth);
}

void calcAverage(vector<double> &arrAverageGas, vector<double> &arrAveragePerMonth, vector<int> &arrMonth)
{
    int count;
    double average;
    for (int i = 1; i <= 12; i++)
    {
        count = 0;
        average = 0;
        for (int j = 0; j < arrAverageGas.size(); j++)
        {
            if (arrMonth[j] == i)
            {
                average += arrAverageGas[j];
                count++;
            }
        }
        average /= count;
        arrAveragePerMonth.push_back(average);
    }
}

void selectionSort(vector<double> &arrAverageGas, vector<int> &listMonth)
{
    int min;
    for (int i = 0; i < arrAverageGas.size() - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < arrAverageGas.size(); j++)
        {
            if (arrAverageGas[j] < arrAverageGas[min])
            {
                min = j;
            }
        }
        swap(arrAverageGas[i], arrAverageGas[min]);
        swap(listMonth[i], listMonth[min]);
    }
}

void writeFile(vector<int> &listMonth, vector<double> &arrAverageGas)
{
    ofstream fout;
    fout.open("output.txt");
    for (int i = 0; i < arrAverageGas.size(); i++)
    {
        fout << listMonth[i] << " " << arrAverageGas[i] << endl;
    }
    fout.close();
}

void readFile(vector<int> &arrMonth, vector<double> &arrAverageGas)
{
    ifstream inFile;
    inFile.open("./FileData/1994_Weekly_Gas_Averages.txt");
    if (!inFile)
    {
        cout << "Khong mo duoc file Gas.txt" << endl;
        return;
    }
    int month;
    double averageGas;
    while (inFile >> month >> averageGas)
    {
        arrMonth.push_back(month);
        arrAverageGas.push_back(averageGas);
    }
    inFile.close();
}

void output(vector<double> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
}

void output(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
}