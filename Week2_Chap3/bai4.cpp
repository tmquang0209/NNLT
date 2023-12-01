#include<iostream>
using namespace std;
int main(){
    double length1, width1, area1,
                 length2, width2, area2;
    cout<<"enter the length of the rectangular area 1: ";
    cin >> length1;
    cout<<"enter the width of the rectangular area 1: ";
    cin >> width1;
    cout<<"------------------------------------------------"<<endl;
    cout<<"enter the length of the rectangular area 2: ";
    cin >> length2;
    cout<<"enter the width of the rectangular area 2: ";
    cin >> width2;
    area1 = length1 * width1;
    area2 = length2 * width2;
    cout<<"------------------------------------------------"<<endl;
    if(area1 > area2){
        cout<<"Rectangular area 1 greater than rectangular area 2";
    }else if(area1 < area2){
        cout<<"Rectangular area 1 smaller than rectangular area 2";
    }else{
        cout<<"rectangular area 1 equal to rectangular area 2";
    }
    return 0;
}