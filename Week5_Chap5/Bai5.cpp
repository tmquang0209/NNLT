#include<iostream>
#include<math.h>
using namespace std;

double inputValue(double);
double fallingDistance(double);
void outputDistance(double, double);
void loopDistance(double);

int main(){
    double sec, distance;
    sec = fallingDistance(sec);
    outputDistance(sec, distance);
    loopDistance(distance);
    return 0;
}

double inputValue(double num){
    do
    {
        cin >> num;
        if(num < 0){
            cout<<"Please enter value greater than 0."<<endl;
        }
    } while (num < 0);
    return num;
}

double fallingDistance(double sec){
    cout<<"Enter the time (s): ";
    sec = inputValue(sec);
    return sec;
}


void outputDistance(double sec, double distance){
    distance = (double)(0.5 * 9.8 * pow(sec, 2));
    cout<<"Distance: "<<distance<<"m"<<endl;
}
 
void loopDistance(double distance){
    for(int i = 1; i <= 10; i++){
        distance = (double)(0.5 * 9.8 * pow(i, 2));
        cout<<i<<" sec to travel to distance: "<<distance<<"m"<<endl;
    }
}