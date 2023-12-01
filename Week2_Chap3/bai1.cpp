#include<iostream>
using namespace std;
int main(){
    int num_f, num_s,max,min;
    cout<<"Enter value: ", cin >> num_f;
    cout<<"Enter value: ", cin >> num_s;
    max =(num_f > num_s) ?num_f:num_s;
    min =(num_s > num_f) ?num_f:num_s;
    cout<<"Max number: "<<max<<endl;
    cout<<"Min number: "<<min;
    return 0;
}