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

*Bổ sung bài toán số 16 trong đó có tính đến dân số chuyển đến và chuyển đi khỏi
*vùng đó. Bổ sung vào đầu bài 2 tham số nữa (ngoài 4 tham số đã cho ở bài 16) là số
*dân chuyển đến và số dân chuyển đi hàng năm.
*Chương trình sẽ in ra sự biến chuyển dân số từng năm.*/
#include <iostream>
using namespace std;

double inputValidate(double);
double populationOfTheYear(double, double, double, double, double, double);
void showPopulationOfTheYear(double, double, double, double, double, double);

int main()
{
    double initial, birthRate, deathRate, year, moveIn, moveAway;
    cout << "Nhap dan so ban dau: ";
    initial = inputValidate(initial);
    cout << "Nhap ty le sinh: ";
    birthRate = inputValidate(birthRate);
    cout << "Nhap ty le tu: ";
    deathRate = inputValidate(deathRate);
    cout << "Nhap so nam can hien thi: ";
    year = inputValidate(year);
    cout << "Nhap so nguoi chuyen den: ";
    moveIn = inputValidate(moveIn);
    cout << "Nhap so nguoi chuyen di: ";
    moveAway = inputValidate(moveAway);

    showPopulationOfTheYear(initial, birthRate, deathRate, year, moveIn, moveAway);
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

double populationOfTheYear(double initial, double birthRate, double deathRate, double moveIn, double moveAway)
{
    double population = initial * (1 + birthRate / 100 - deathRate / 100) + (moveIn - moveAway);

    return population;
}

void showPopulationOfTheYear(double initial, double birthRate, double deathRate, double year, double moveIn, double moveAway)
{
    double population = initial;
    for (int i = 1; i <= year; i++)
    {
        population = populationOfTheYear(population, birthRate, deathRate, moveIn, moveAway);
        cout << "Nam " << i << ": " << population << endl;
    }
}