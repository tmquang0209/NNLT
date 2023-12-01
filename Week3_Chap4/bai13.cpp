#include<iostream>
using namespace std;
int main(){
    int number, max, min,
        num_max, num_min;
    max = INT16_MIN;
    min = INT16_MAX;
    while (number != -99)
    {
        cout<<"Enter number: ";
        cin >> number;
        if(number > max){
            max = number;
            num_max = max;
        }
        if(number < min && number != -99){
            min = number;
            num_min = min;
        }
    }
    cout<<"Max value: "<<num_max<<endl;
    cout<<"Min value: "<<num_min;

}