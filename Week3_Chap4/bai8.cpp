#include<iostream>
#include<cstdlib>
#include<ctime>
#include<stdlib.h>
using namespace std;
int main(){
    double number_f, number_s, switch_of,choice1, choice2, result;
    cout<<"1.ON."<<endl;
    cout<<"2.OFF."<<endl;
    cout<<"Enter your selection: ";
    cin >> switch_of;
    if(switch_of == 2){
        exit(0);
    }
    if(switch_of == 1){
        while (switch_of == 1)
        {
            srand((double)time(0));
            number_f = rand();
            number_s = rand();
            cout<<number_f<<endl;
            cout<<number_s<<endl;
            cout<<"                      "<<endl; 
            cout<<"----------------------"<<endl;
            cout<<"                      "<<endl; 
            cout<<"1. Summation (+)."<<endl;
            cout<<"2. Subtraction (-)."<<endl;
            cout<<"3. Multiplication (*)."<<endl;
            cout<<"4. Division (/)."<<endl;
            cout<<"5.Exit."<<endl;
            cout<<"Enter your selection(1-5): "; cin >> choice1;
            if(choice1 == 1){
                result = number_f + number_s;
                cout<<"------------------------"<<endl;
                cout<<"Result: "<<result<<endl;
                cout<<"------------------------"<<endl;
            }
            else if(choice1 == 2){
                result = number_f - number_s;
                cout<<"------------------------"<<endl;
                cout<<"Result: "<<result<<endl;
                cout<<"------------------------"<<endl;
            }
            else if(choice1 == 3){
                result = number_f * number_s;
                cout<<"------------------------"<<endl;
                cout<<"Result: "<<result<<endl;
                cout<<"------------------------"<<endl;
            }
            else if(choice1 == 4){
                result = number_f / number_s;
                cout<<"------------------------"<<endl;
                cout<<"Result: "<<result<<endl;
                cout<<"------------------------"<<endl;
            }
            else if(choice1 == 5){
                cout<<"Are you sure you want to exit the program?(1-2)."<<endl;
                cout<<"1.Yes."<<endl;
                cout<<"2.No."<<endl;
                cin >> choice2;
                if(choice2 == 1){
                    exit(0);
                }
                if(choice2 != 2){
                    exit(0);
                }
            }else{
                cout<<"---------------"<<endl;
                cout<<"Error"<<endl;
                cout<<"---------------"<<endl;
            }
        }
    }else{
        cout<<"Syntax Error.";
        exit(0);
    }
    
}