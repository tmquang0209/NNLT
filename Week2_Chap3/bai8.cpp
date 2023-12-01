#include<iostream>
using namespace std;
int main(){
    string priColor1, priColor2;
    cout<<"Enter the name of the 3 primary colors: ";
    cin >> priColor1;
    cout<<"Enter the name of the 3 primary colors: ";
    cin >> priColor2;
    if(priColor1 == "red" || priColor1 == "Red"){
        if(priColor2 == "blue" || priColor2 == "Blue"){
            cout<<priColor1<<" and "<<priColor2<<" ---> Purple.";
        }
        else if(priColor2 == "yellow" || priColor2 == "Yellow"){
            cout<<priColor1<<" and "<<priColor2<<" ---> Orange.";
        }
    }else if(priColor1 == "blue" || priColor1 == "Blue"){
        if(priColor2 == "red" || priColor2 == "Red"){
            cout<<priColor1<<" and "<<priColor2<<" ---> Purple.";
        }else if(priColor2 == "yellow" || priColor2 == "Yellow"){
            cout<<priColor1<<" and "<<priColor2<<" ---> Green.";
        }
    }else if(priColor1 == "yellow" || priColor1 == "Yellow"){
        if(priColor2 == "blue" || priColor2 == "Blue"){
            cout<<priColor1<<" and "<<priColor2<<" ---> Green.";
        }else if(priColor2 == "red" || priColor2 == "Red"){
            cout<<priColor1<<" and "<<priColor2<<" ---> Orange.";
        }
    }else{
        cout<<"Syntax Error.Please run again program and re-enter the name of the three primary colors.";
    }
    return 0;
}