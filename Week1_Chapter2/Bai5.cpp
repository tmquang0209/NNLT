#include<iostream>
using namespace std;
int main(){
    double male, female, studentSum;
    double percentMale, percentFemale;
    cout<<"Enter the number of male students: ";
    cin >> male;
    cout<<"Enter the number of female students: ";
    cin >> female;
    studentSum = male + female;
    percentMale = (male / studentSum)*100;
    percentFemale = (female / studentSum)*100;
    cout<<"Percentage of male: "<<percentMale <<" %" <<endl;
    cout<<"Percentage of female: "<<percentFemale <<" %" <<endl;
    return 0;
}