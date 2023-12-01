#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void readFile(vector<string> &, string);
void output(vector<string> &);
void countChampion(vector<string> &, string);
int main()
{
    vector<string> listTeams;
    vector<string> WorldSeriesWinners;
    string teamSearch;

    readFile(listTeams, "Teams");
    readFile(WorldSeriesWinners, "WorldSeriesWinners");

    output(listTeams);

    cout << "Nhap ten doi bong: ";
    getline(cin, teamSearch);
    countChampion(WorldSeriesWinners, teamSearch);

    return 0;
}

void readFile(vector<string> &team, string fileName)
{
    string vectorElement;
    ifstream fileOpen("./FileData/" + fileName + ".txt");
    while (getline(fileOpen, vectorElement))
    {
        team.push_back(vectorElement);
    }
}

void output(vector<string> &vector)
{
    for (int i = 0; i < vector.size(); i++)
    {
        cout << (i + 1) << " " << vector[i] << endl;
    }
}

void countChampion(vector<string> &vector, string teamSearch)
{
    int count = 0;
    for (int i = 0; i < vector.size(); i++)
    {
        if (vector[i] == teamSearch)
        {
            count++;
        }
    }
    cout << "So lan doi " << teamSearch << " chien thang: " << count << endl;
}