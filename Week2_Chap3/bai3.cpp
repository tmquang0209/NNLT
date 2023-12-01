#include<iostream>
using namespace std;
int main(){
    int day, month, year;
    cout<<"Enter date of birth: ", cin >> day;
    cout<<"Enter month of birth: ", cin >> month;
    cout<<"Enter year of birth(enter only the last 2 digits): ";
    cin >> year;
    if(year > 100){
        cout<<"Syntax error.Please enter only the last 2 digits of the year of birth"<<endl;
    }else if(day * month == year){
        cout<<day<<"th"<<" is magic day";
    }else{
        cout<<day<<"th"<<" is not magic day";
    }
    return 0;
}