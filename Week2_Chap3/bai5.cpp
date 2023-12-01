/*
Chỉ số BMI được tính theo công thức lấy cân nặng (kg) chi cho bình phương của chiều
cao (tính theo mét). Nếu BMI lớn hơn 25 là thừa cân, nhỏ hơn 18.5 là gầy, trong khoảng
18.5 đến 25 là bình thường.
Viết chương trình yêu cầu người dùng nhập chiều cao và cân nặng của họ. sau đó cho
biết họ đang ở mức cân nặng nào trong 3 loại trên
*/
#include<iostream>
using namespace std;
int main(){
    double weight, height, BMI;
    cout<<"Enter your weight(kg): ",cin >> weight;
    cout<<"Enter your height(m): ",cin >> height;
    BMI = weight/(height*height);
    if(BMI > 25){
        cout<<"Overweight";
    }else if(BMI < 18.5){
        cout<<"Thin";
    }else{
        cout<<"Normal";
    }
    return 0;
}