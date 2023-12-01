#include<iostream>
using namespace std;
int main(){
    double weightPallet, weightSum;
    cout<<"Enter weight Pallet: ", cin >> weightPallet;
    cout<<"Enter weight sum of pallet and item: ";
    cin >> weightSum;
    cout<<"the number of items stacked on the pallet: "<< (weightSum-weightPallet)/12.5 <<endl;
    return 0;
}