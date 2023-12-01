#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string name, first, last;
    ifstream readFile("./FileData/LineUp.txt");

    readFile >> name;
    first = last = name;

    while (readFile >> name)
    {
        if (name < first)
            first = name;
        if (name > last)
            last = name;
    }
    readFile.close();

    cout << "First: " << first << endl;
    cout << "Last: " << last << endl;
}