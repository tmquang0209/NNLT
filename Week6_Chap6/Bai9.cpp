#include <iostream>
using namespace std;

const int AMOUNT_ELEMENT = 7;

int input(int, int);
double input(double, double);
void display(int[], int[], double[], double[]);

int main()
{
    int empId[AMOUNT_ELEMENT] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[AMOUNT_ELEMENT];
    double payRate[AMOUNT_ELEMENT];
    // int hours[AMOUNT_ELEMENT] = {35, 20, 30, 50, 40, 25, 35};
    // double payRate[AMOUNT_ELEMENT] = {150, 125, 150, 110, 135, 115, 140};
    double waves[AMOUNT_ELEMENT];

    for (int i = 0; i < AMOUNT_ELEMENT; i++)
    {
        cout << "Nhap so gio lam cua nhan vien " << i + 1 << ": ";
        hours[i] = input(hours[i], 0);
        cout << "Nhap ty le luong cua nhan vien " << i + 1 << ": ";
        payRate[i] = input(payRate[i], 15.00);
    }

    for (int i = 0; i < AMOUNT_ELEMENT; i++)
    {
        waves[i] = hours[i] * payRate[i];
    }

    display(empId, hours, payRate, waves);
}

int input(int num, int floor)
{
    int input;
    cin >> input;
    while (input < floor)
    {
        cout << "Nhap lai: ";
        cin >> input;
    }
    return input;
}

double input(double num, double floor)
{
    double input;
    cin >> input;
    while (input < floor)
    {
        cout << "Nhap lai: ";
        cin >> input;
    }
    return input;
}

void display(int empId[], int hours[], double payRate[], double waves[])
{
    cout << "Ma NV\t\tSo gio lam\tHe so\t\tLuong" << endl;
    for (int i = 0; i < AMOUNT_ELEMENT; i++)
    {
        cout << empId[i] << "\t\t" << hours[i] << "\t\t" << payRate[i] << "\t\t" << waves[i] << endl;
    }
}