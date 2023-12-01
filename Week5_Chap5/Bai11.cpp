#include <iostream>

using namespace std;

void getScore(double &score);
void calcAverage(double score1, double score2, double score3, double score4, double score5);
int findLowest(double score1, double score2, double score3, double score4, double score5); // tra lai min
char inputValidate(char);
double inputValedate(double);

int main()
{
    double score1, score2, score3, score4, score5;

    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);

    calcAverage(score1, score2, score3, score4, score5);
    return 0;
}

double inputValedate(double score)
{
    cin >> score;
    while (score < 0 || score > 100)
    {
        cout << "So khong duoc nho hon 0. Nhap lai: ";
        cin >> score;
    }
    return score;
}

void getScore(double &score)
{
    cout << "Nhap diem: ";
    score = inputValedate(score);
}

int findLowest(double score1, double score2, double score3, double score4, double score5)
{
    int lowest;
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
        lowest = 5;
    }
    return lowest;
}

void calcAverage(double score1, double score2, double score3, double score4, double score5)
{
    double lowest = findLowest(score1, score2, score3, score4, score5);
    double average = 0;

    if (score1 == lowest)
    {
        average = (score2 + score3 + score4 + score5) / 4;
    }
    else if (score2 == lowest)
    {
        average = (score1 + score3 + score4 + score5) / 4;
    }
    else if (score3 == lowest)
    {
        average = (score1 + score2 + score4 + score5) / 4;
    }
    else if (score4 == lowest)
    {
        average = (score1 + score2 + score3 + score5) / 4;
    }
    else if (score5 == lowest)
    {
        average = (score1 + score2 + score3 + score4) / 4;
    }
    cout << "Diem trung binh 4 diem cao nhat la: " << average << endl;
}