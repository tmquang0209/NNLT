#include <iostream>
using namespace std;

bool isPrime(int n);
int inputValidate(int number);

int main()
{
    int n;
    cout << "Nhap so nguyen duong n: ";
    n = inputValidate(n);
    if (isPrime(n))
    {
        cout << "So " << n << " la so nguyen to";
    }
    else
    {
        cout << "So " << n << " khong phai la so nguyen to";
    }
    return 0;
}

int inputValidate(int n)
{
    while (!(cin >> n) || n < 0)
    {
        cout << "Moi nhap lai" << endl;
    }
    return n;
}

bool isPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}