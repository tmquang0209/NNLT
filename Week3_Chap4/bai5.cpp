#include<iostream>
using namespace std;
int main(){
    int fee = 2500, serial = 1;
    cout<<"Year 1, fee: 2500$"<<endl;
    for(int i = 2; i <= 6; i++){
        fee = fee+(fee*0.04);
        serial += 1;
        cout<<"Year "<<serial<<", fee: "<<fee<<"$."<<endl;
    }
}