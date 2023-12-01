/*
Viết chương trình yêu cầu người dùng nhập vào số giây. Sau đó in ra khoảng thời gian
đó là mấy ngày, giờ, phút, giây.
Chú ý:
 Nếu số ngày bằng không thì không cần in ra số ngày
 Nếu số giờ bằng không thì không cần in ra số giờ
 Nếu số phút bằng không thì không cần in ra số phút
 Nếu số giây bằng không thì không cần in ra số giây
*/
#include<iostream>
using namespace std;
int main(){
    int seconds, minutes, hours, days;
    cout<<"Enter the number of second(s): ";
    cin >> seconds;
    if(seconds < 60){
        cout<<seconds<<" seconds";
    }else if(seconds >= 60 && seconds < 3600){
        minutes = seconds / 60;
        seconds = seconds % 60;
        cout<<minutes<<" minutes "<<seconds<<" seconds";
    }else if(seconds >= 3600 && seconds < 86400){
        hours = seconds / 3600;
        minutes = (seconds % 3600)/60;
        seconds = ((seconds % 3600) % 60) % 60;
        cout<<hours<< " hours "<<minutes<<" minutes "<<seconds<<" seconds";
    }else{
        days = seconds / 86400;
        hours = (seconds % 86400)/3600;
        minutes = ((seconds % 86400) % 3600 / 60);
        seconds = ((seconds % 86400) % 3600 % 60) % 60;
        cout<<days<<" days "<<hours<< " hours "<<minutes<<" minutes "<<seconds<<" seconds";
    }
    return 0;
}