#include<iostream>
using namespace std;
int main(){
    int naturalNumber;
    cout<<"Enter value is natural number: ";
    cin >> naturalNumber;
    if(naturalNumber > 10 || naturalNumber <= 0){
        cout <<"Input error. Please enter natural number !"<<endl;
    }
    if(naturalNumber <= 10 && naturalNumber > 0){
        switch (naturalNumber)
        {
        case 1:
            cout<<naturalNumber<<" --->"<<" Roman Number: I";
            break;
        case 2:
            cout<<naturalNumber<<" --->"<<" Roman Number: II";
            break;
        case 3:
            cout<<naturalNumber<<" --->"<<" Roman Number: III";
            break;
        case 4:
            cout<<naturalNumber<<" --->"<<" Roman Number: IV";
            break;
        case 5:
            cout<<naturalNumber<<" --->"<<" Roman Number: V";
            break;
        case 6:
            cout<<naturalNumber<<" --->"<<" Roman Number: VI";
            break;
        case 7:
            cout<<naturalNumber<<" --->"<<" Roman Number: VII";
            break;
        case 8:
            cout<<naturalNumber<<" --->"<<" Roman Number: VIII";
            break;
        case 9:
            cout<<naturalNumber<<" --->"<<" Roman Number: IX";
            break;
        case 10:
            cout<<naturalNumber<<" --->"<<" Roman Number: X";
            break;
        default:
            break;
        }
    }
}