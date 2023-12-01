#include<iostream>
using namespace std;
int main(){
    int month, year;
    cout<<"Enter the month(1-12): "; cin >> month;
    cout<<"Enter the year: "; cin >> year;
    if(month == 1 ||month == 3 || month == 5 ||
       month == 7 || month == 8 || month == 10 || month == 12)
    {
        cout<<"Month "<<month<<" have 31 days";   
    }else if(month == 4 ||month == 6 || 
             month == 9 || month == 11)
    {
        cout<<"Month "<<month<<" have 30 days";   
    }else if(month == 2){
        if(year % 100 == 0 && year % 400 == 0){
            cout<<"Month "<<month<<" have 29 days";
        }else if(year % 4 == 0){
            cout<<"Month "<<month<<" have 29 days";
        }else{
            cout<<"Month "<<month<<" have 28 days";
        }
    }
    return 0;
}