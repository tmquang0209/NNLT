/*
Suppose you have a certain amount of money in a savings account that earns compound
monthly interest, and you want to calculate the amount that you will have after a specific number of months. The formula, which is known as the future value formula, is:
F = P * (1 + i)^t
The terms in the formula are as follows:
• F is the future value of the account after the specified time period.
• P is the present value of the account.
• i is the monthly interest rate.
• t is the number of months.
Write a program that prompts the user to enter the account’s present value, monthly
interest rate, and the number of months that the money will be left in the account. The
program should pass these values to a function named futureValue that returns the
future value of the account, after the specified number of months. The program should
display the account’s future value.
*/
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

float futureValue(float, float, int);
char inputValidate(char);
float inputValedate(float);

int main()
{
    float presentValue, interestRate, months;
    char userChoice;
    do
    {
        cout << "Nhap gia tri hien tai: ";
        presentValue = inputValedate(presentValue);
        cout << "Nhap lai suat: ";
        interestRate = inputValedate(interestRate);
        cout << "Nhap so thang: ";
        months = inputValedate(months);

        cout << "Gia tri tien trong tuong lai: " << futureValue(presentValue, interestRate, months) << endl
             << endl;

        cout << "Ban co muon tinh them khong? (Y/N)";
        userChoice = inputValidate(userChoice);
    } while (userChoice == 'Y' || userChoice == 'y');
    return 0;
}
float futureValue(float presentValue, float interestRate, int months)
{
    return presentValue * pow((1 + interestRate / 100), months);
}
float inputValedate(float num)
{
    cin >> num;
    while (num < 0)
    {
        cout << "So khong duoc nho hon 0. Nhap lai: ";
        cin >> num;
    }
    return num;
}

char inputValidate(char letters)
{
    cin >> letters;

    while (!(letters == 'y' ||
             letters == 'Y' ||
             letters == 'N' ||
             letters == 'n'))
    {
        cout << "Ban chi duoc nhap Y hoac N. Nhap lai: ";
        cin >> letters;
    }
    return letters;
}