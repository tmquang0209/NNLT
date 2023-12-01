#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int year, month = 0;
    double amountRain, totalRainFall = 0;
    cout<<"Number of year: ";
    cin >> year;
    for(int i = 0; i < year; i++){
        for(int j = 0; j < 12; j++){
            month++;
            cout<<"Rainfall of the month "<<month<<" : ";
            cin>>amountRain;
            totalRainFall += amountRain;
            if(amountRain < 0){
                cout<<"Amount of rain greater than or equal to 0.";
                return 0;
            }
            if(month == 12){
                month = 0;
                cout<<"----------------------------"<<endl;
            }
        }
    }
    cout<<"Number of months: "<<year * 12<<"."<<endl;
    cout<<"total rainfall: "<<totalRainFall<<"mm."<<endl;
    cout<<"Average rainfall per month: "<<totalRainFall / (year * 12)<<"mm.";
}