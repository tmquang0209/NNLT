#include<iostream>
using namespace std;

double inputValue(double);
void findHighest(double, double , double, double);

double inputValue(double num){
    do
    {   
        cin >> num;
        if(num < 0){
            cout<<"Value greater than 0."<<endl;
        }
    } while (num < 0);
    return num;
}

double getSales(string name){
    double sales;
    cout<<"Enter "<<name<<" : ";
    sales = inputValue(sales);
    return sales;
}

void findHighest(double Northeast,double Southeast,double Northwest,double Southwest){
    double highest;
    if(Northeast > Southeast &&
       Northeast > Northwest &&
       Northeast > Southwest)
    {
        highest = Northeast;
        cout<<"Northeast";
    }else if(Southeast > Southwest &&
             Southeast > Northwest &&
             Southeast > Northwest)
    {
        highest = Southeast;
        cout<<"Southeast";
    }else if(Northwest > Northeast &&
             Northwest > Southeast &&
             Northwest > Southwest)
    {
        highest = Northwest;
        cout<<"Northwest";
    }else{
        highest = Southwest;
        cout<<"Southwest";
    }
    cout<<" is the unit with the largest sales: "<<highest;
}

int main(){
    double Northeast, Southeast, Northwest, Southwest;
    Northeast = getSales("Northeast");
    Southeast = getSales("Southeast");
    Northwest = getSales("Northeast");
    Southwest = getSales("Southwest");
    findHighest(Northeast, Southeast, Northwest, Southwest);
    return 0;
}
