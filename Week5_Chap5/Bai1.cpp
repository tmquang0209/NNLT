#include<iostream>
#include<iomanip>
using namespace std;

double calculateRetail();

int main(){
    double retailPrice;
    retailPrice = calculateRetail();
    cout<<fixed<<setprecision(2);
    cout<<"The retail price of the item ($): "<< retailPrice <<endl;
    return 0;
}

double calculateRetail()
{
    double wholesalePrices, retailPercent;
    do
    {
        cout<<"Enter wholesale prices: ";
        cin >> wholesalePrices;
        if(wholesalePrices < 0)
        {
            cout<<"ERROR.Wholesale prices is positive number."<<endl;    
        }
    }while(retailPercent < 0);
    do
    {
        cout<<"Enter retail percent: ";
        cin >> retailPercent;
        if(retailPercent < 0)
        {
            cout<<"ERROR.Retail percent is positive number."<<endl;    
        }
    }while(retailPercent < 0);
    return wholesalePrices  * (1 + retailPercent/100);
}