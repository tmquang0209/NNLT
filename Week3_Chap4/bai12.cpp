#include<iostream>
using namespace std;
int main(){
    double degreeC = 0, degreeF;
    for(int i = 0; i <= 20; i++){ 
        degreeF = (1.8 * degreeC) + 32;
        cout<<degreeC<<"*C"<<" ---> "<<degreeF<<"*F"<<endl;
        degreeC++;
    }
}