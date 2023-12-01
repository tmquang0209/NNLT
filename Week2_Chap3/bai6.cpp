/*
Viết chương trình nhập vào cân nặng của đồ vật và in ra trọng lượng của nó. Nếu trọng
lượng đạt trên 100 thì thông báo vật quá nặng, nếu trọng lượng nhỏ hơn 10 thì thông
báo vật quá nhẹ. Biết trọng lượng của 1 vật được tính băng công thức lấy khối lượng
(kg) nhân với 9.8.
*/
#include<iostream>
using namespace std;
int main(){
    double makeweight, weight;
    cout<<"Enter makeweight(kg): ",cin >> makeweight;
    weight = makeweight * 9.8;
    if(weight > 100){
        cout<<"The weight of the object is "<<weight<<" (N). It's too heavy";
    }else if(weight < 10){
        cout<<"The weight of the object is "<<weight<<" (N). It's too light";
    }else{
        cout<<"The weight of the object is "<<weight<<" (N).";
    }
    return 0;
}