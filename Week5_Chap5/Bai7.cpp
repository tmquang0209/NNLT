#include<iostream>
using namespace std;


double celsius(double);

double celsius(double degreeC){
    for(int i = 0; i <= 20; i++){
         degreeC = (double)(0.5555555*(i-32));
         cout<<i<<" *F -----> "<<degreeC<<" *C"<<endl;
    }
    return degreeC;

}

int main(){
    double degreeC;
    degreeC = celsius(degreeC);
    return 0;
}