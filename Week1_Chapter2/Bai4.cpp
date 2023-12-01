#include<iostream>
using namespace std;
int main(){
    string monthFirst, monthSecond, MonthThird;
    float amountOfRain1, amountOfRain2, amountOfRain3, average;  
    cout <<"Enter month name: " ; cin >> monthFirst;
    cout <<"Enter amount of rain: "; cin >> amountOfRain1;
    cout <<"Enter month name: "; cin >> monthSecond;
    cout <<"Enter amount of rain: "; cin >> amountOfRain2;
    cout <<"Enter month name: "; cin >> MonthThird;
    cout <<"Enter amount of rain: "; cin >> amountOfRain3;
    average = (amountOfRain1 + amountOfRain2 + amountOfRain3) / 3;
    cout <<"Luong mua trung binh cua thang "<<monthFirst<<", "<<monthSecond<<" va "<<MonthThird<<" la: "<<average<<" inches.";
    return 0;
}