#include<iostream>
#include<iomanip>
using namespace std;

void getData(int, double *);
void selectionSort(int, double *);
double Average(int, double *);
void showData(double, int , double *);

//*****************************************************************************
//                       hàm lấy dữ liệu vào mảng                             *
// Sử dụng pointer                                                            *
//                                                                            *
//*****************************************************************************
void getData(int sizeCore, double *point)
{
    for(auto i = 0; i < sizeCore; i++)
    {
        do
        {
            cout<<"#"<<i+1<<": ";
            cin >> *(point+i);
            if(*(point+i) < 0)
            {
                cout<<"Please enter point have value greater than or equal to 0..."<<endl;
            }
        } while ((*point + i) < 0);
        
    }
}

//*****************************************************************************
//                             Sắp xếp lựa chọn                               *
// Đây là hàm dùng để sắp xếp mảng theo thứ tự tăng dần.                      *
//                                                                            *
//*****************************************************************************

void selectionSort(int sizeScore, double *point)
{
    int min_idx;
    for(auto i = 0; i < sizeScore-1; i++)
    {
        min_idx = i;
        for(auto j = i + 1; j < sizeScore; j++)
        {
            if(*(point+j) < *(point + min_idx))
            {
                min_idx = j;
            }
        }
        swap(*(point+i), *(point+min_idx));
    }
}

//*****************************************************************************
//                                Tính trung bình                             *
//                                                                            *
//                                                                            *
//*****************************************************************************

double Average(int sizeCore, double *point)
{
    double result;
    for(auto i = 0; i < sizeCore; i++)
    {
        result += *(point + i);
    }
    result /= sizeCore;
    return result;
}

//*****************************************************************************
//                             Hiển thị kết quả                               *
//                                                                            *
//                                                                            *
//*****************************************************************************

void showData(double average, int sizeCore, double *point)
{
    cout<<"Sorted score list and grade average"<<endl;
    for(auto i = 0; i < sizeCore; i++)
    {
        cout<<"#"<<i+1<<": "<<*(point+i)<<endl;
    }
    cout<<"Average: "<<setprecision(3)<<average;
}


int main()
{
    int sizeScore;
    double average;
    do
    {
        cout<<"How many points do you want to enter?"<<endl;
        cout<<">>> ";
        cin >> sizeScore;
        if(sizeScore <= 0)
        {
            cout<<"Please enter value greater than 0..."<<endl;
        }
    } while (sizeScore <= 0);    
    double (*point) = new double [sizeScore];
    getData(sizeScore, point);
    selectionSort(sizeScore, point);
    average = Average(sizeScore, point);
    showData(average, sizeScore, point);
    delete[] point;
    return 0;
}
