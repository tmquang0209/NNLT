/*
Sử dụng 2 file:  CorrectAnswers.txt và  StudentAnswers.txt
Đưa đáp án vào mảng

*/

#include <iostream>
#include <fstream>

using namespace std;

const int AMOUNT_ANSWER = 20;

void readFile(char[], string);
void outputArray(char[]);
int countTheWrongAnswer(char[], char[]);
void listTheWrongAnswer(char[], char[]);

int main()
{
    double percent, countCorrect;
    char correctAnswer[AMOUNT_ANSWER];
    char studentAnswer[AMOUNT_ANSWER];

    readFile(correctAnswer, "CorrectAnswers.txt");
    readFile(studentAnswer, "StudentAnswers.txt");

    outputArray(correctAnswer);
    cout << endl
         << endl;
    outputArray(studentAnswer);
    cout << endl
         << endl;
    int count = countTheWrongAnswer(correctAnswer, studentAnswer);

    countCorrect = AMOUNT_ANSWER - count;
    percent = (countCorrect / AMOUNT_ANSWER) * 100;

    cout << "Ban tra loi sai: " << count << " cau" << endl;
    cout << "Ty le % tra loi dung: " << percent << endl;

    if (percent >= 70)
        cout << "chuc mung ban vuot qua ky thi." << endl;
    else
        cout << "ban da truot." << endl;

    return 0;
}

void readFile(char arr[], string fileName)
{
    char text;
    ifstream file("./FileData/" + fileName);

    for (int i = 0; i < AMOUNT_ANSWER; i++)
    {
        file >> text;
        arr[i] = text;
    }
    file.close();
}

void outputArray(char array[])
{
    for (int i = 0; i < AMOUNT_ANSWER; i++)
    {
        cout << array[i] << " ";
    }
}

int countTheWrongAnswer(char correctAnswer[], char studentAnswer[])
{
    int count = 0;
    for (int i = 0; i < AMOUNT_ANSWER; i++)
    {
        if (correctAnswer[i] != studentAnswer[i])
        {
            count++;
        }
    }
    return count;
}

void listTheWrongAnswer(char correctAnswer[], char studentAnswer[])
{
    cout << "Student\t\tCorrect" << endl;
    for (int i = 0; i < AMOUNT_ANSWER; i++)
    {
        if (correctAnswer[i] != studentAnswer[i])
        {
            cout << studentAnswer[i] << "\t\t" << correctAnswer[i] << endl;
        }
    }
}