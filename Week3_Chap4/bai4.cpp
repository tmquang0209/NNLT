#include<iostream>
using namespace std;
int main(){
    int minutes = 0;
    double calories = 0;
    cout<<"Initial calories: 0"<<endl;
    for(int i = 0;i < 30; i+= 1){
        calories += 3.6;
        minutes += 1;
        if(minutes % 5 == 0){
        cout<<"After "<<minutes<<" minutes calories burned: "<<calories<<"cal."<<endl;
        }
    }
}