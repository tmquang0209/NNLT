#include <iostream>

using namespace std;

void displayMenu();
void doMenu();
float input(float);

int main()
{
    doMenu();
    return 0;
}

void displayMenu()
{
    cout << "1. Dien tich hinh tron \n"
         << "2. Dien tich HCN \n"
         << "0. Thoat" << endl;
}

void doMenu()
{
    int choice;
    do
    {
        displayMenu();
        cout << "Nhap lua chon: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Dien tich hinh tron" << endl;
            float r;
            cout << "Nhap ban kinh: ";
            r = input(r);
            cout << "Dien tich = " << 3.14 * r * r << endl;
            break;
        case 2:
            cout << "Dien tich HCN" << endl;
            float weight, height;
            cout << "Nhap chieu dai: ";
            weight = input(weight);
            cout << "Nhap chieu rong: ";
            height = input(height);
            cout << "Dien tich = " << weight * height << endl;
            break;
        case 0:
            cout << "Thoat" << endl;
            break;
        default:
            cout << "Lua chon khong hop le" << endl;
            break;
        }
    } while (choice != 0);
}

float input(float num)
{
    while (!(cin >> num) || num <= 0)
    {
        cout << "Nhap lai: ";
    }
    return num;
}