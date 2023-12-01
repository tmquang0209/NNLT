#include <iostream>
#include <string.h>

using namespace std;

double inputValidate(double, double);
char inputValidate(char);
void displayOrderInfo(double numSpoolsOrdered, double numSpoolsInStock, double = 10.00);

int main()
{
    double numSpoolsOrdered, numSpoolsInStock;
    char userChoice;
    cout << "So luong san pham da dat: ";
    numSpoolsOrdered = inputValidate(numSpoolsOrdered, 1);
    cout << "So luong san pham trong kho: ";
    numSpoolsInStock = inputValidate(numSpoolsInStock, 0);
    cout << "Ban co muon nhap chi phi phat sinh khong? (y/n): ";
    userChoice = inputValidate(userChoice);
    if (userChoice == 'y' || userChoice == 'Y')
    {
        double cost;
        cout << "Nhap chi phi phat sinh: ";
        cost = inputValidate(cost, 0);
        displayOrderInfo(numSpoolsOrdered, numSpoolsInStock, cost);
    }
    else
    {
        displayOrderInfo(numSpoolsOrdered, numSpoolsInStock);
    }
}

double inputValidate(double num, double num1)
{
    while (!(cin >> num) || num < num1)
    {
        cout << "Nhap lai: ";
    }
    return num;
}

char inputValidate(char ch)
{
    while (!(cin >> ch) || (ch != 'y' && ch != 'Y' && ch != 'n' && ch != 'N'))
    {
        cout << "Nhap lai: ";
    }
    return ch;
}

void displayOrderInfo(double numSpoolsOrdered, double numSpoolsInStock, double cost)
{
    const double PRICE_PER_SPOOL = 100.00;
    double total, subtotal, spoolOnBackOrder, spoolReadyToShip, totalSpecialCharges;
    cout << "So luong san pham da dat: " << numSpoolsOrdered << endl;
    cout << "So luong san pham trong kho: " << numSpoolsInStock << endl;
    cout << "Chi phi phat sinh: " << cost << endl;

    if (numSpoolsOrdered > numSpoolsInStock)
    {

        spoolOnBackOrder = numSpoolsOrdered - numSpoolsInStock;
        spoolReadyToShip = numSpoolsOrdered - spoolOnBackOrder;
        subtotal = spoolReadyToShip * PRICE_PER_SPOOL;
        totalSpecialCharges = spoolReadyToShip * cost;
        total = subtotal + totalSpecialCharges;
    }
    else
    {
        spoolReadyToShip = numSpoolsOrdered;
        subtotal = spoolReadyToShip * PRICE_PER_SPOOL;
        totalSpecialCharges = spoolReadyToShip * cost;
        total = subtotal + totalSpecialCharges;
    }

    cout << "So san pham san sang van chuyen: " << spoolReadyToShip << endl;
    cout << "Tong tien san pham: " << subtotal << endl;
    cout << "Tong tien phat sinh: " << totalSpecialCharges << endl;
    cout << "Tong tien: " << total << endl;
}