#include <iostream>
using namespace std;

int inputValidate(int);
int numEmployees();
int daysAbsent(int);
double averageDaysAbsent(int, int);

int main()
{
    int numMember, dayOfHolidays;
    double averageDays;
    numMember = numEmployees();
    dayOfHolidays = daysAbsent(numMember);
    averageDays = averageDaysAbsent(numMember, dayOfHolidays);
    cout << "So nhan vien: " << numMember << endl;
    cout << "So ngay nghi: " << dayOfHolidays << endl;
    cout << "Trung binh so ngay nghi: " << averageDays << endl;
}

int inputValidate(int num, int num2)
{
    do
    {
        cin >> num;
    } while (num < num2);
    return num;
}

int numEmployees()
{
    int employee;
    cout << "Nhap so nhan vien: ";
    employee = inputValidate(employee, 1);
    return employee;
}

int daysAbsent(int num)
{
    int day = 0;
    for (int i = 1; i <= num; i++)
    {
        cout << "Nhap so ngay nghi cho #" << i << ": ";
        day += inputValidate(day, 0);
    }
    return day;
}

double averageDaysAbsent(int employee, int days)
{
    double average;
    average = (double)days / static_cast<double>(employee);
    return average;
}