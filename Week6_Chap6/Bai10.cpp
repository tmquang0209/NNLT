#include <iostream>
using namespace std;

bool checkAnswer(char[], char[], int index); // Kiem tra cau tra loi voi dap an
bool passTest(char[], char[]);
void answerIncorrect(char[], char[]);
char inputValidate(char, int);
void outputArray(char[]);

int main()
{
    char answer[20] = {'A', 'D', 'B', 'B', 'C',
                       'B', 'A', 'B', 'C', 'D',
                       'A', 'C', 'D', 'B', 'D',
                       'C', 'C', 'A', 'D', 'B'};

    char yourAnswer[20];
    for (int i = 0; i < 20; i++)
    {
        yourAnswer[i] = inputValidate(yourAnswer[i], (i + 1));
    }

    cout << "===== Result =====" << endl;
    if (passTest(answer, yourAnswer))
    {
        cout << "Ban da do!" << endl;
    }
    else
    {
        cout << "Ban da truot!" << endl;
        answerIncorrect(answer, yourAnswer);
    }
    cout << "===================" << endl;
    cout << "==== Answer Incorrect =====" << endl;
    answerIncorrect(answer, yourAnswer);
    cout << "===========================" << endl;
    return 0;
}

char inputValidate(char letter, int num)
{
    do
    {
        cout << "Nhap dap an #" << num << ": ";
        cin >> letter;
    } while (letter != 'A' && letter != 'B' && letter != 'C' && letter != 'D');
    return letter;
}

bool checkAnswer(char answer[], char yourAnswer[], int index)
{

    if (answer[index] == yourAnswer[index])
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool passTest(char answer[], char yourAnswer[])
{
    int count = 0;
    for (int i = 0; i < 20; i++)
    {
        if (checkAnswer(answer, yourAnswer, i))
        {
            count++;
        }
    }
    cout << "Ban da tra loi dung " << count << " cau hoi." << endl;
    if (count >= 15)
        return true;
    else
        return false;
}

void answerIncorrect(char answer[], char yourAnswer[])
{
    for (int i = 0; i < 20; i++)
    {
        if (!checkAnswer(answer, yourAnswer, i))
        {
            cout << "Dap an #" << i + 1 << " sai. Dap an dung la: " << answer[i] << endl;
        }
    }
}

void outputArray(char array[])
{
    for (int i = 0; i < 20; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}