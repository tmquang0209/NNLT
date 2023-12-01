#include<iostream>
using namespace std;
int main(){
    string nameFilm;
    int adultTicket,
           childTicket;
    int totalRevenue;
    cout<<"Enter movie name: ", cin >> nameFilm;
    cout<<"Enter adult ticket number: ", cin >> adultTicket;
    cout<<"Enter child ticket number: ", cin >> childTicket;
    totalRevenue = adultTicket*10 + childTicket*6;
    cout<<"Movie theater revenue: "<< (totalRevenue)*0.2 <<"$"<<endl;
    cout<<"Movie film distributor revenue: "<<(totalRevenue)*0.8<<"$" <<endl;
    return 0;
}