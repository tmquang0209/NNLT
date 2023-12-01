/*
The profit from the sale of a stock can be calculated as follows:
Profit = ((NS * SP) - SC) - ((NS * PP) + PC)
where NS is the number of shares, SP is the sale price per share, SC is the sale commission paid, PP is the purchase price per share, and PC is the purchase commission paid.
If the calculation yields a positive value, then the sale of the stock resulted in a profit.
If the calculation yields a negative number, then the sale resulted in a loss.
Write a function that accepts as arguments the number of shares, the purchase price per
share, the purchase commission paid, the sale price per share, and the sale commission
paid. The function should return the profit (or loss) from the sale of stock.Programming Challenges 373
Demonstrate the function in a program that asks the user to enter the necessary data
and displays the amount of the profit or loss.
*/

#include <iostream>

using namespace std;

double inputValidate(double number, double condiction);
double profit(double, double, double, double, double);

int main()
{
    double numberOfShares, purchasePrice, purchaseCommission, salePrice, saleCommission, profitPrice;
    cout << "Nhap so luong co phan: ";
    numberOfShares = inputValidate(numberOfShares, 0);
    cout << "Nhap gia mua moi co phan: ";
    purchasePrice = inputValidate(purchasePrice, 0);
    cout << "Nhap hoa hong ban hang: ";
    purchaseCommission = inputValidate(purchaseCommission, 0);
    cout << "Nhap gia mua vao cua moi co phan: ";
    salePrice = inputValidate(salePrice, 0);
    cout << "Nhap hoa hong phai tra khi mua co phan: ";
    saleCommission = inputValidate(saleCommission, 0);
    cout << endl
         << endl;
    profitPrice = profit(numberOfShares, purchasePrice, purchaseCommission, salePrice, saleCommission);
    if (profitPrice < 0)
    {
        cout << "Ban da lo: $" << -profitPrice << endl;
    }
    else
    {
        cout << "Ban da lai: $" << profitPrice << endl;
    }
    return 0;
}

double inputValidate(double number, double condiction)
{
    while (!(cin >> number) || number < condiction)
    {
        cout << "Moi nhap lai" << endl;
    }
    return number;
}

double profit(double numberOfShares, double purchasePrice, double purchaseCommission, double salePrice, double saleCommission)
{
    return ((numberOfShares * salePrice) - saleCommission) - ((numberOfShares * purchasePrice) + purchaseCommission);
}