/*
1. Búa
2. Giấy (Bao)
3. Kéo
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int random();
int inputValidate(int &);
void display(int, int);

int main()
{
    int userChoice;
    int computerChoice;
    int userScore = 0;
    int computerScore = 0;

    do
    {
        cout << "1. Bua \t2. Giay \t3. Keo \t0. Thoat" << endl;
        userChoice = inputValidate(userChoice);
        computerChoice = random();
        if (computerChoice == 1)
        {
            cout << "May chon: Bua" << endl;
        }
        else if (computerChoice == 2)
        {
            cout << "May chon: Giay" << endl;
        }
        else if (computerChoice == 3)
        {
            cout << "May chon: Keo" << endl;
        }

        if (userChoice == 1)
        {
            if (computerChoice == 1)
            {
                cout << "Hoa" << endl;
            }
            else if (computerChoice == 2)
            {
                cout << "Thua" << endl;
                computerScore++;
            }
            else if (computerChoice == 3)
            {
                cout << "Thang" << endl;
                userScore++;
            }
        }
        else if (userChoice == 2)
        {
            if (computerChoice == 1)
            {
                cout << "Thang" << endl;
                userScore++;
            }
            else if (computerChoice == 2)
            {
                cout << "Hoa" << endl;
            }
            else if (computerChoice == 3)
            {
                cout << "Thua" << endl;
                computerScore++;
            }
        }
        else if (userChoice == 3)
        {
            if (computerChoice == 1)
            {
                cout << "Thua" << endl;
                computerScore++;
            }
            else if (computerChoice == 2)
            {
                cout << "Thang" << endl;
                userScore++;
            }
            else if (computerChoice == 3)
            {
                cout << "Hoa" << endl;
            }
        }
    } while (userChoice != 0);
    cout << endl
         << endl;
    cout << "May thang: " << computerScore << endl;
    cout << "Ban thang: " << userScore << endl;
}

int random()
{
    return rand() % 3 + 1;
}

int inputValidate(int &n)
{
    while (!(cin >> n) || n < 0 || n > 3)
    {
        cout << "Moi nhap lai" << endl;
    }
    return n;
}