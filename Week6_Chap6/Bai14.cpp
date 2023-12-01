#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;
int main(){
    int lottery[5];
    int user[5];
    int count = 0;
    srand(time(NULL));
    for(int i = 0; i < 5; i++){
        lottery[i] = {rand() % 10};
    }
    cout<<"Enter your number: ";
    for(int j = 0; j < 5; j++){
        cin >> user[j];
    }
    for(int j = 0 ; j < 5; j++){
        cout<<user[j];
    }
    cout<<endl;
    for(int k = 0; k < 5; k++){
        if(lottery[k] == user[k]){
            count++;
        }
        cout<<lottery[k];
    }
    cout<<endl;
    cout<<"==========================================="<<endl;
    cout<<"Number of digits that match: "<<count<<endl;
    if(count == 5){
        cout<<"you won the jackpot.";
    }else{
        cout<<"Wish you luck next time.";
    }
}