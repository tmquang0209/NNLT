#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

void readFile(vector<string> &, string);
void output(vector<string> &);

int main()
{
    vector<string> answer;
    string question, letter;
    bool flag = true;
    srand(time(NULL));
    readFile(answer, "8_ball_responses");
    do
    {
        cout << "Nhap cau hoi? ";
        getline(cin, question);
        cout << "The 8-ball noi: " << answer[rand() % answer.size()] << endl;
        cout << "Ban co muon tiep tuc? (y/n) ";
        getline(cin, letter);
        if (letter == "n")
            flag = false;
    } while (flag);
}

void readFile(vector<string> &arr, string fileName)
{
    string line;
    ifstream openFile("./FileData/" + fileName + ".txt");
    if (openFile.is_open())
    {
        while (getline(openFile, line))
        {
            arr.push_back(line);
        }
        openFile.close();
    }
    else
        cout << "Khong the mo file";
}

void output(vector<string> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << (i + 1) << " " << arr[i] << endl;
    }
}