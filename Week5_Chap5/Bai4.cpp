#include<iostream>
using namespace std;

int getNamAccidents(int);
int inputValue(int);
void findLowest(int, int, int, int, int);

int inputValue(int num){
    cin >> num;
    return num;
}

int getNamAccidents(string name){
    int accident;
    do
    {
        cout<<"Accident "<< name <<" : ";
        accident = inputValue(accident);
        if(accident < 0){
            cout<<"Accident must greater than 0."<<endl;
        }
    } while (accident < 0);
    return accident;
}

void findLowest(int East,int  West,int  South,int North,int Center){
    int Lowest;
    if(North < South   &&
	   North < East    &&
	   North < West    &&
	   North < Center)
	{
		Lowest = North;
		cout << "North ";
	}
	else if(South < North   &&
	   		South < East    &&
	   		South < West    &&
	   		South < Center)
	{
		Lowest = South;
		cout << "South ";
	}
	else if(East < North   &&
	   		East < South   &&
	   		East < West    &&
	   		East < Center)
	{
		Lowest = East;
		cout << "East ";
	}
	else if(West < North   &&
	   		West < East    &&
	   		West < South   &&
	   		West < Center)
	{
		Lowest = West;
		cout << "West ";
	}
	else
	{
		Lowest = Center;
		cout << "Center ";
	}

	cout << "region which had " << Lowest << " reported traffic accidents.\n\n";
    
}

int main(){
    int East, West, South, North, Center;
    East = getNamAccidents("East");
    West = getNamAccidents("West");
    South = getNamAccidents("South");
    North = getNamAccidents("North");
    Center = getNamAccidents("Center");
    findLowest(East, West, South, North, Center);
	return 0;
}