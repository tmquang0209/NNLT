#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const float GIA_GHE_HANG_A = 15;
    const float GIA_GHE_HANG_B = 12;
    const float GIA_GHE_HANG_C = 9;

    float soVeHangA, soVeHangB, soVeHangC;
    cout << "Nhap vao so ve hang A: ";
    cin >> soVeHangA;
    cout << "Nhap vao so ve hang B: ";
    cin >> soVeHangB;
    cout << "Nhap vao so ve hang C: ";
    cin >> soVeHangC;

    float tongTien = (soVeHangA * GIA_GHE_HANG_A) + (soVeHangB * GIA_GHE_HANG_B) + (soVeHangC * GIA_GHE_HANG_C);
    cout << "Tong tien: " << setprecision(2) << fixed << tongTien << endl;
}