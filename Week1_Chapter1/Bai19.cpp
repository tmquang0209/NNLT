#include <iostream>
using namespace std;

int main()
{
    const float PERCENT = 0.02;
    int nhietDoTBNewYork, nhietDoTBDenver, nhietDoTBPhoenix;
    nhietDoTBNewYork = 85;
    nhietDoTBDenver = 88;
    nhietDoTBPhoenix = 106;

    cout << "Nhiet do trung binh cua New York la: " << nhietDoTBNewYork * (1 + PERCENT) << endl;
    cout << "Nhiet do trung binh cua Denver la: " << nhietDoTBDenver * (1 + PERCENT) << endl;
    cout << "Nhiet do trung binh cua Phoenix la: " << nhietDoTBPhoenix * (1 + PERCENT) << endl;
    return 0;
}