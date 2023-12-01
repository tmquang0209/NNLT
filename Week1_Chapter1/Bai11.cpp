#include <iostream>
using namespace std;

int main()
{
    const float capacity = 20;
    float freeway, cityStreet;
    cityStreet = 23.5;
    freeway = 28.9;
    cout << "Quang duong o to di duoc voi 1 binh xang di chuyen trong thanh pho la: " << cityStreet * capacity << endl;
    cout << "Quang duong o to di duoc voi 1 binh xang di chuyen trong duong cao toc la: " << freeway * capacity << endl;
    return 0;
}