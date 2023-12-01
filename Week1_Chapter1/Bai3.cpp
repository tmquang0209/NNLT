#include <iostream>
using namespace std;
int main()
{
    // taxA: Thue cua 1 tieu bang
    // taxB: Thue cua 1 quan
    int cash;
    float taxA, taxB, total;
    cash = 95;
    taxA = 0.04;
    taxB = 0.02;
    total = cash * (taxA + taxB);
    cout << total << endl;
    return 0;
}