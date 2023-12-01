#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int numCreatures, days;
    double averageIncrease, organismPerDay = 1;
    cout<<"Original number of organisms: ";
    cin >> numCreatures;
    if(numCreatures < 2){
        cout<<"ERROR. Please re-enter.\n Original number of organisms greater than or equal to 2.";
        return 0;
    }else{
        cout<<"Average daily increase in population (%): ";
        cin >> averageIncrease;
        if (averageIncrease < 0)
        {
            cout<<"ERROR. Please re-enter.\n Average daily increase in population (%) greater than 0.";
            return 0;
        }else{
            cout<<"The number of days will multiply: ";
            cin >> days;
            if(days < 1)
            {
                cout<<"ERROR. Please re-enter.\n The number of days will multiply greater than 1.";
            }else{
                for(int i = 1; i <= days; i++){
                    organismPerDay = numCreatures*(pow(averageIncrease, i));
                    cout<<"Day "<<i<<" : "<<organismPerDay<<endl;
                }
            }
        }
    }
}