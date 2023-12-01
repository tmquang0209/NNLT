#include<iostream>
using namespace std;
int main(){
    double speed, time, distance = 1;
    cout<<"Enter speed: ", cin >> speed;
    cout<<"Enter time: ", cin >> time;
    if(speed < 0 || time < 1){
        cout<<"Error.Please re-enter speed > 0 and time >= 1"<<endl;
    }else{
        for(int i = 1; i <= time; i++){
            distance = speed * i;
            cout<<i<<"    "<<distance<<endl;
        }
    }
}