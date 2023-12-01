#include<iostream>
using namespace std;
int main(){
    int number,sum = 0;
    cout<<"Enter number: ", cin >> number;
    if(number < 0){
        cout<<"Error.Please enter number greater than 0";
    }else{
        for(int i = 0; i <= number; i++){
        sum += i;
    }
    cout<<sum;
    }
}