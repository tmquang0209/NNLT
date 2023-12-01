#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int inputValue(int);
int coinToss(int);

int inputValue(int num){
    do
    {
        cin >> num;
        if(num <= 0){
            cout<<"Please enter value greater than 0."<<endl;
        }
    } while (num <= 0);
    return num;
}
int coinToss(int coin){
    int toss, heads = 0, tails = 0;
    cout<<"Enter the number of times you want to toss: ";
    coin = inputValue(coin);
    srand(time(NULL));
    for(int i = 1; i <= coin; i++){
        toss = 1 + rand() % 2;
        if(toss == 1){
            cout<<i<<"."<<"heads"<<endl;
            heads++;
        }
        if(toss == 2){
            cout<<i<<"."<<"tails"<<endl;
            tails++;
        } 
    }
    cout<<"========================="<<endl;
    cout<<"Number heads: "<<heads<<endl;
    cout<<"Number tails: "<<tails<<endl;
    return coin;
}

int main(){
    int coin;
    coin = coinToss(coin);
    return 0;
}