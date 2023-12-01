#include <iostream>

using namespace std;

int main()
{
    int initialMoney = 100;
    float interestRate = 0.07;
    float total = initialMoney;
    int year = 1;
    while (total < initialMoney * 2)
    {
        total += total * interestRate;
        cout << "So tien sau nam " << year++ << " la: " << total << endl;
    }
}