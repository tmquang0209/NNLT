#include<iostream>
using namespace std;

int main(){
    const float giaCoPhieu = 35.00;
    float soCoPhieu, hoaHong;
    soCoPhieu =750;
    hoaHong = soCoPhieu * giaCoPhieu * 0.02;
    cout << "So tien thanh toan CP: " << soCoPhieu*giaCoPhieu << endl;
    cout << "Tong tien hoa hong: " << hoaHong << endl;
    cout << "Tong tien thanh toan: " << soCoPhieu*giaCoPhieu + hoaHong << endl;

    return 0;
}