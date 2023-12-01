#include <iostream>
using namespace std;

bool isPrime(int n);

int main()
{
    int count = 0, i = 1;
    while (count < 100)
    {
        if (isPrime(i))
        {
            cout << i << endl;
            count++;
        }
        i++;
    }
    return 0;
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