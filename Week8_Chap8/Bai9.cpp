#include<iostream>

using namespace std;

double funcMedian(double *, int);

double funcMedian(double *arr, int size)
{
    int n = (size / 2) - 1;
    double value = 0;
    for(int i = n; i < (size / 2); i+= n)
    {
        value = *(arr+i) + *(arr + (++i));
    }
    value /= 2;
    return value;
}

int main()
{
    int size = 16;
    double median;
    double *arr = new double[size]{1, 2, 3, 4, 5, 6, 7, 8, 9,
                                  10, 11, 12, 13, 14, 15, 16};

    median = funcMedian(arr, size);
    cout<<"Median value of array (1 - 16): "<<median;
    delete []arr;
    return 0;
}