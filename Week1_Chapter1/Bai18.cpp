#include <iostream>
using namespace std;

int main()
{
    int soKhachHang = 16500;
    float soKHSDNuocTangLucMoiTuan = soKhachHang * 0.15;
    float soKHThichViCam = soKHSDNuocTangLucMoiTuan * 0.58;

    cout << "So khach hang su dung nuoc tang luc moi tuan: " << soKHSDNuocTangLucMoiTuan << endl;
    cout << "So khach hang thich vi cam: " << soKHThichViCam << endl;
    return 0;
}