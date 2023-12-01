#include <iostream>
using namespace std;

int main()
{
    float profit, price, importPrice;
    profit = 0.35;
    importPrice = 14.95;
    price = importPrice * (1 + profit);
    cout << "Gia ban: " << price << endl;
    return 0;
}