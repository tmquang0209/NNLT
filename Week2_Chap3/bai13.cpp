#include<iostream>
using namespace std;
int main(){
    int book, rewardPoint;
    cout<<"Enter the number of books purchased: ";
    cin >> book;
    if(book < 0){
        cout <<"Syntax error.Please number greater than or equal to 0";
    }
    if(book >= 0){
        if(book == 0){
            rewardPoint = 0;
        }else if(book == 1){
            rewardPoint = 5;
        }else if(book == 2){
            rewardPoint = 15;
        }else if(book == 3){
            rewardPoint = 30;
        }else{
            rewardPoint = 60;
        }
        cout<<"Your reward point: "<<rewardPoint;
    }
    return 0;
}