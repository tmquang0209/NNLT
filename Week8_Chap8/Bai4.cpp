#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

void getData(int, double *);
void selectionSort(int,string *, double *);
double Average(int, double *);
void showData(double, int ,string *, double *);

//*****************************************************************************
//                       hàm lấy dữ liệu vào mảng                             *
// Sử dụng pointer                                                            *
//                                                                            *
//*****************************************************************************
void getData(int sizeCore, string *names, double *point)
{
    for(auto i = 0; i < sizeCore; i++)
    {
        cin.ignore();
        do
        {
            cout<<"Name: ";
            getline(cin, *(names+i));
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

void selectionSort(int sizeScore, string *names, double *point)
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
        swap(*(names+i), *(names+min_idx));
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
    for(auto i = 1; i < sizeCore; i++)
    {
        result += *(point + i);
    }
    return result / (sizeCore-1);
}

//*****************************************************************************
//                             Hiển thị kết quả                               *
//                                                                            *
//                                                                            *
//*****************************************************************************

void showData(double average, int sizeCore, string *names, double *point)
{
    cout<<"Sorted score list and grade average"<<endl;
    for(auto i = 0; i < sizeCore; i++)
    {
        cout<<*(names+i)<<": "<<*(point+i)<<endl;
    }
    cout<<"Average 4 highest points:  "<<setprecision(3)<<average;
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
    string *names = new string [sizeScore];
    getData(sizeScore, names, point);
    selectionSort(sizeScore, names, point);
    average = Average(sizeScore, point);
    showData(average, sizeScore, names, point);
    delete[] point;
    delete[] names;
    return 0;
}
