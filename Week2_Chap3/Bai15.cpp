#include <iostream>

using namespace std;

int main()
{
    const float RATE_PER_LESS_2KG = 1.10,
                RATE_PER_2KG_TO_6KG = 2.20,
                RATE_PER_6KG_TO_10KG = 3.70,
                RATE_PER_10KG_TO_20KG = 4.80;

    float weightPackage, distance, totalPayment;
    cout << "Nhap can nang: ";
    cin >> weightPackage;
    cout << "Nhap khoang cach: ";
    cin >> distance;

    if (weightPackage <= 0 || distance < 10 || weightPackage > 20 || distance > 3000)
    {
        cout << "Can nang hoac khoang cach khong hop le!" << endl;
        return 0;
    }
    if (weightPackage <= 2)
    {
        totalPayment = distance * RATE_PER_LESS_2KG;
    }
    else if (weightPackage <= 6)
    {
        totalPayment = distance * RATE_PER_2KG_TO_6KG;
    }
    else if (weightPackage <= 10)
    {
        totalPayment = distance * RATE_PER_6KG_TO_10KG;
    }
    else
    {
        totalPayment = distance * RATE_PER_10KG_TO_20KG;
    }
    cout << "Tong tien phai tra: " << totalPayment << endl;
    return 0;
}