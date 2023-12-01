#include<iostream>
using namespace std;
int main(){
    double cent, nickel, dime, quarter, dollar;
    cout <<"Enter the number of cent: ", cin >> cent;
    cout <<"Enter the number of nickel: ", cin >> nickel;
    cout <<"Enter the number of dime: ", cin >> dime;
    cout <<"Enter the number of quarter: ", cin >> quarter;
    dollar = (cent + nickel*5 + dime*10 + quarter*35)/100;
    cout<<"-------------------------------------------------"<<endl;
    if(dollar == 1){
        cout<<"Congratulation. You won...!";
    }else if(dollar < 1){
        cout<<"Smaller than 1 dollar";
    }else{
        cout<<"Greater than 1 dollar";
    }
    return 0;
}