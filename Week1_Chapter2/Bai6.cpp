#include<iostream>
using namespace std;
int main(){
    double sugar = 1.5,
    butter = 1,
    flour = 2.75, numberCake;
    cout<<"Enter number of cake you want to make: ";
    cin >> numberCake;
    cout<<"Ingredients to make "<<numberCake<<" cake: "<<endl;
    cout<<"Sugar: "<< ((sugar / 48) * numberCake) <<" glass"<<endl;
    cout<<"Butter: "<< ((butter / 48) * numberCake) <<" glass"<<endl;
    cout<<"Flour: "<< ((flour / 48) * numberCake) <<" glass"<<endl;
    return 0;
}