#include<iostream>
using namespace std;
int main(){
    int years = 0;
    double seaLevel = 0;
    cout<<"Year 0 sea level is: 0mm"<<endl;
    for(int i = 0; years < 25; i+=1){
        seaLevel +=1.5;
        years++;
        cout<<"Year "<<years<<" sea level is: "<<seaLevel<<"mm"<<endl;
    }
}