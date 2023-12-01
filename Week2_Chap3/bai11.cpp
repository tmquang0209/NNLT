#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int number_f, number_s, sum;
    srand((int)time(0));
    number_f = rand();
    number_s = rand();
    cout<<number_f<<endl;
    cout<<"+"<<number_s<<endl;
    cout<<"-------";
    cout<<"Enter the answer: ", cin >> sum;
    if(sum == number_f + number_s){
        cout<<"Congratulation..!";
    }else{
        cout<<"The result is not correct";
    }
    return 0;
}