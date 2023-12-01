#include<iostream>
using namespace std;
int main(){
    int floors, numRoom = 0, totalUsedRoom = 0;
    double  usedRoom = 0, totalRoom = 0;
    cout<<"Enter the number of floor: ";
    cin >> floors;
    cout<<"--------------------------------------"<<endl;
    if(floors < 1 || floors >= 13){
        cout<<"Number of room greater than 1 and smaller than 13.";
        return 0;
    }
    for(int i = 0; i < floors; i++){
        cout<<"Number of rooms in one floor: ";
        cin >> numRoom;
        if(numRoom < 10){
            cout<<"Number of rooms in one floor greater than 9 room.";
            return 0;
        }else{
            cout<<"number of rooms already in use: ";
            cin >> usedRoom;
            cout<<"--------------------------------------"<<endl;
            totalRoom += numRoom;
            totalUsedRoom += usedRoom;
        }
    }
    cout<<"Total number of rooms: "<<totalRoom<<endl;
    cout<<"Number of rooms in use: "<<totalUsedRoom<<endl;
    cout<<"Unused room number: "<<totalRoom - totalUsedRoom<<endl;
    cout<<"Room occupancy rate : "<<(totalUsedRoom / totalRoom)*100<<"%";;
}