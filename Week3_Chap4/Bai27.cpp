#include <iostream>
#include <iomanip>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{

    const int _31DAYS = 31,
              _28DAYS = 28,
              _29DAYS = 29,
              _30DAYS = 30;
    int i = 1;
    float sum1 = 0, sum2 = 0, sum3 = 0,
          sum4 = 0, sum5 = 0, sum6 = 0,
          sum7 = 0, sum8 = 0, sum9 = 0,
          sum10 = 0, sum11 = 0, sum12 = 0;
    string step;
    ifstream stepsReader("./FileData/steps.txt");
    while (getline(stepsReader, step))
    {
        if (i >= 1 && i <= 31)
        {
            sum1 += stof(step);
        }
        if (i >= 32 && i <= 60)
        {
            sum2 += stof(step);
        }
        if (i >= 61 && i <= 91)
        {
            sum3 += stof(step);
        }
        if (i >= 92 && i <= 121)
        {
            sum4 += stof(step);
        }
        if (i >= 122 && i <= 152)
        {
            sum5 += stof(step);
        }
        if (i >= 153 && i <= 182)
        {
            sum6 += stof(step);
        }
        if (i >= 183 && i <= 213)
        {
            sum7 += stof(step);
        }
        if (i >= 214 && i <= 244)
        {
            sum8 += stof(step);
        }
        if (i >= 245 && i <= 274)
        {
            sum9 += stof(step);
        }
        if (i >= 275 && i <= 305)
        {
            sum10 += stof(step);
        }
        if (i >= 306 && i <= 335)
        {
            sum11 += stof(step);
        }
        if (i >= 336 && i <= 365)
        {
            sum12 += stof(step);
        }
        i++;
    }
    stepsReader.close();

    cout << setprecision(2) << fixed;
    cout << "Thang 1: " << sum1 / _31DAYS << endl;
    cout << "Thang 2: " << sum2 / _28DAYS << endl;
    cout << "Thang 3: " << sum3 / _31DAYS << endl;
    cout << "Thang 4: " << sum4 / _30DAYS << endl;
    cout << "Thang 5: " << sum5 / _31DAYS << endl;
    cout << "Thang 6: " << sum6 / _30DAYS << endl;
    cout << "Thang 7: " << sum7 / _31DAYS << endl;
    cout << "Thang 8: " << sum8 / _31DAYS << endl;
    cout << "Thang 9: " << sum9 / _30DAYS << endl;
    cout << "Thang 10: " << sum10 / _31DAYS << endl;
    cout << "Thang 11: " << sum11 / _30DAYS << endl;
    cout << "Thang 12: " << sum12 / _31DAYS << endl;
    return 0;
}