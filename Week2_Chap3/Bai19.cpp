#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double wavelength;
    cout << "Nhap buoc song: ";
    cin >> wavelength;
    if (wavelength >= 1E-2)
    {
        cout << "Song radio";
    }
    else if (wavelength >= 1E-3 && wavelength < 1E-2)
    {
        cout << "Song lo vi song";
    }
    else if (wavelength >= 7E-7 && wavelength < 1E-2)
    {
        cout << "Song hong ngoai";
    }
    else if (wavelength >= 4E-7 && wavelength < 7E-7)
    {
        cout << "Song anh sang";
    }
    else if (wavelength >= 1E-8 && wavelength < 4E-7)
    {
        cout << "Song tu ngoai";
    }
    else if (wavelength >= 1E-11 && wavelength < 1E-8)
    {
        cout << "Tia X";
    }
    else if (wavelength < 1E-11)
    {
        cout << "Tia Gamma";
    }
    return 0;
}