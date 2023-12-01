#include<iostream>
using namespace std;
int main(){
    double package = 99,
    quantity, discount, bill;
    cout<<"Enter the number of package: ";
    cin >> quantity;
    bill = (package * quantity);
    if(quantity > 0 && quantity < 10){
        bill = bill;
    }else if(quantity >= 10 && quantity <= 19){
        bill = (bill + (bill) * 0.2);
    }else if(quantity >= 20 && quantity <= 49){
        bill = (bill + (bill) * 0.3);
    }else if(quantity >= 50 && quantity <= 99){
        bill = (bill + (bill) * 0.4);
    }else{
        bill = (bill + (bill) * 0.5);
    }
    cout<<"Amount to be paid: "<< bill<<"$";
    return 0;
}