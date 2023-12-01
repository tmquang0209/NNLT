#include<iostream>
#include<math.h>
using namespace std;

double inputValue(double);
void presentValue(double, double, double, double);

double inputValue(double num){
    do
    {
        cin >> num;
    } while (num < 0);
    return num;
}

void presentValue(double expectedAmount, double F, double r, double n)
{
    cout<<"Expected to receive in the future: ";
    F = inputValue(F);
    cout<<"Interest rate: ";
    r = inputValue(r);
    cout<<"The expected number of years to be sent: ";
    n = inputValue(n);
    expectedAmount = (double)(F / (pow((1+r), n)));
    cout<<"The expected amount to send: "<<expectedAmount;
}

int main(){
    double expectedAmount, F, r, n;
    presentValue(expectedAmount, F, r, n);
    return 0;
}