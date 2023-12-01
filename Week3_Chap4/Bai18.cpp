#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string line;
    int populationIn1900, populationIn1920, populationIn1940, populationIn1960, populationIn1980, populationIn2000;

    ifstream readerFile;
    readerFile.open("./FileData/People.txt");

    readerFile >> populationIn1900 >> populationIn1920 >> populationIn1940 >> populationIn1960 >> populationIn1980 >> populationIn2000;
    readerFile.close();

    cout << "1900: ";
    for (int i = 0; i <= populationIn1900; i += 1000)
    {
        cout << "*";
    }
    cout << endl;

    cout << "1920: ";
    for (int i = 0; i <= populationIn1920; i += 1000)
    {
        cout << "*";
    }
    cout << endl;

    cout << "1940: ";
    for (int i = 0; i <= populationIn1940; i += 1000)
    {
        cout << "*";
    }
    cout << endl;

    cout << "1960: ";
    for (int i = 0; i <= populationIn1960; i += 1000)
    {
        cout << "*";
    }
    cout << endl;

    cout << "1980: ";
    for (int i = 0; i <= populationIn1980; i += 1000)
    {
        cout << "*";
    }
    cout << endl;

    cout << "2000: ";
    for (int i = 0; i <= populationIn2000; i += 1000)
    {
        cout << "*";
    }
    cout << endl;
}