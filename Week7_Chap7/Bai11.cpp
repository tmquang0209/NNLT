#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

const int NUM_NAMES = 20;

void selectionSort(vector<string> &);
void output(vector<string> &);
void readFile(vector<string> &, string);

int main()
{
    vector<string> listNames;
    readFile(listNames, "Name.txt");

    selectionSort(listNames);
    output(listNames);

    return 0;
}

void selectionSort(vector<string> &arr)
{
    int min;
    string temp;
    for (int i = 0; i < NUM_NAMES - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < NUM_NAMES; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void readFile(vector<string> &listNames, string fileName)
{
    ifstream inFile;
    inFile.open("./FileData/" + fileName);
    string line;
    while (getline(inFile, line))
    {
        listNames.push_back(line);
    }
    inFile.close();
}

void output(vector<string> &arr)
{
    for (int i = 0; i < NUM_NAMES; i++)
    {
        cout << arr[i] << endl;
    }
}