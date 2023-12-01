#include <iostream>
using namespace std;

void getLength(double &length);
void getWidth(double &width);
void getArea(double length, double width, double &area);
void displayData(double length, double width, double area);
double inputValidate(double);

int main()
{
    double length, width, area;
    getLength(length);
    getWidth(width);
    getArea(length, width, area);
    displayData(length, width, area);
    return 0;
}

double inputValidate(double num)
{
    do
    {
        cin >> num;
    } while (num < 0);
    return num;
}

void getLength(double &length)
{
    cout << "Nhap chieu dai: ";
    length = inputValidate(length);
}

void getWidth(double &width)
{
    cout << "Nhap chieu rong: ";
    width = inputValidate(width);
}

void getArea(double length, double width, double &area)
{
    area = length * width;
}

void displayData(double length, double width, double area)
{
    cout << "Chieu dai: " << length << endl;
    cout << "Chieu rong: " << width << endl;
    cout << "Dien tich: " << area << endl;
}