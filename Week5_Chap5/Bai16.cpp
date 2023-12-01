/*
Trong vấn đề dân số, tỷ lệ sinh là phần trăm số người được sinh ra trên tổng dân số,
và tỷ lệ tử là phần trăm số người bị chết đi trên tổng dân số. Viết một chương trình
hiển thị tổng số dân sau một số năm bất kỳ. Chương trình sẽ hỏi người dùng các
thông tin sau:
- Tổng số dân năm bắt đầu tính
- Tỷ lệ sinh hàng năm
- Tỷ lệ tử hàng năm
- Số năm cần hiển thị
Viết một hàm tính số dân của năm, công thức tính số dân của năm như sau:
N = P + BP – DP.
Trong đó N là dân số năm tiếp theo, P là dân số năm trước, B và D lần lượt là tỷ lệ
sinh và tỷ lệ tử của năm đó.
*/
#include <iostream>
using namespace std;

double inputValidate(double);
double populationOfTheYear(double, double, double);
void showPopulationOfTheYear(double, double, double, double);

int main()
{
    double initial, birthRate, deathRate, year;
    cout << "Nhap dan so ban dau: ";
    initial = inputValidate(initial);
    cout << "Nhap ty le sinh: ";
    birthRate = inputValidate(birthRate);
    cout << "Nhap ty le tuu: ";
    deathRate = inputValidate(deathRate);
    cout << "Nhap so nam can hien thi: ";
    year = inputValidate(year);
    showPopulationOfTheYear(initial, birthRate, deathRate, year);
    return 0;
}

double inputValidate(double number)
{
    while (!(cin >> number) || number < 0)
    {
        cout << "So nhap khong dung. Vui long nhap lai: ";
    }
    return number;
}

double populationOfTheYear(double initial, double birthRate, double deathRate)
{
    double population = initial * (1 + birthRate / 100 - deathRate / 100);
    return population;
}

void showPopulationOfTheYear(double initial, double birthRate, double deathRate, double year)
{
    double population = initial;
    for (int i = 1; i <= year; i++)
    {
        population = populationOfTheYear(population, birthRate, deathRate);
        cout << "Nam " << i << ": " << population << endl;
    }
}