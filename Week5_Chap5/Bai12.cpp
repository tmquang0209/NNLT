#include <iostream>
#include <string>

using namespace std;

void getJudgeData(double &score, string scoreID);
void calcScore(double score1, double score2, double score3, double score4, double score5);
double findLowest(double score1, double score2, double score3, double score4, double score5);
double findHighest(double score1, double score2, double score3, double score4, double score5);
double inputValedate(double);

int main()
{
    double score1, score2, score3, score4, score5;
    getJudgeData(score1, "1");
    getJudgeData(score2, "2");
    getJudgeData(score3, "3");
    getJudgeData(score4, "4");
    getJudgeData(score5, "5");
    calcScore(score1, score2, score3, score4, score5);
    return 0;
}

double inputValedate(double score)
{
    cin >> score;

    while (score < 0 || score > 10 || (float)(score - static_cast<int>(score)) % (float)0.1 == 0)
    {
        cout << "Chi duoc nhap [0-10] va lay den dau thap phan thu nhat. Nhap lai: ";
        cin >> score;
    }
    return score;
}

void getJudgeData(double &score, string scoreID)
{
    cout << "Nhap diem cua giam khao " << scoreID << ": ";
    score = inputValedate(score);
}

double findLowest(double score1, double score2, double score3, double score4, double score5)
{
    double lowest;
    if (score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5)
    {
        lowest = score1;
    }
    else if (score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5)
    {
        lowest = score2;
    }
    else if (score3 < score1 && score3 < score2 && score3 < score4 && score3 < score5)
    {
        lowest = score3;
    }
    else if (score4 < score1 && score4 < score2 && score4 < score3 && score4 < score5)
    {
        lowest = score4;
    }
    else
    {
        lowest = score5;
    }
    return lowest;
}

double findHighest(double score1, double score2, double score3, double score4, double score5)
{
    double highest;
    if (score1 > score2 && score1 > score3 && score1 > score4 && score1 > score5)
    {
        highest = score1;
    }
    else if (score2 > score1 && score2 > score3 && score2 > score4 && score2 > score5)
    {
        highest = score2;
    }
    else if (score3 > score1 && score3 > score2 && score3 > score4 && score3 > score5)
    {
        highest = score3;
    }
    else if (score4 > score1 && score4 > score2 && score4 > score3 && score4 > score5)
    {
        highest = score4;
    }
    else
    {
        highest = score5;
    }
    return highest;
}

void calcScore(double score1, double score2, double score3, double score4, double score5)
{
    double lowest = findLowest(score1, score2, score3, score4, score5);
    double highest = findHighest(score1, score2, score3, score4, score5);
    double average = (score1 + score2 + score3 + score4 + score5 - lowest - highest) / 3;
    cout << "Diem trung binh: " << average << endl;
}
