#include<iostream>
#include<math.h>
using namespace std;

double inputValue(double);
double inputKg(double);
double inputSpeed(double);
void kineticEnergy(double, double);

double inputValue(double num){
    do
    {
        cin >> num;
        if(num < 0){
            cout<<"Please enter value greater than 0."<<endl;
        }
    } while (num < 0);
    return num;
}

double inputKg(double kg){
	cout<<"Kg: ";
	kg = inputValue(kg);
	return kg;
}

double inputSpeed(double speed){
	cout<<"Speed: ";
	speed = inputValue(speed);
	return speed;
}

void kineticEnergy(double kg, double speed){
	double KE;
	KE = (double)(0.5 * kg * pow(speed, 2));
	cout<<KE<<" Jun";
}

int main(){
	double kg, speed;
	kg = inputKg(kg);
	speed = inputSpeed(speed);
	kineticEnergy(kg, speed);
	return 0;
}