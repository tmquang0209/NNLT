#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string text;
    double count = 0,
           sum = 0, 
           average = 0;

    ifstream readFile("./FileData/Random.txt");

    while (readFile >> text)
    {
        count++;
        sum += stof(text);
    }
    readFile.close();
    average = sum / count;

    cout << "So luong: " << count << endl;
    cout << "Tong: " << sum << endl;
    cout << "Trung binh: " << average << endl;
}