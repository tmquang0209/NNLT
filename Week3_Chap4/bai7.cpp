#include<iostream>
using namespace std;
int main(){
    double coin = 1, day, sum = 0;
    cout<<"Enter the number of date: ", cin >> day;
    if(day < 1){
        cout<<"Error.Please enter the number of date >= 1";
    }
    else{
        cout<<"Day 1 1coin."<<endl;
        for(int i = 2; i <= day ; i++){
        coin *= 2;
        cout<<"Day "<<i<<" "<<coin<< " coin."<<endl;
    }
    if(coin >= 100){
        sum = coin / 100;
        cout<<"Total salary: "<<sum<< " $."<<endl;
    }else{
        cout<<"Total salary: "<<coin<< " coin."<<endl;
    }
    }
}