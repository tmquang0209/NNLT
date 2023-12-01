#include<iostream>

using namespace std;

void getData(int *, int);
int Distribution(int *, int);

void getData(int *arr, int size)
{
    for(auto i = 0; i < size; i++)
    {
        do
        {
            cin >> *(arr + i);
            if(*(arr+i) < 0)
            {
                cout<<"Please enter value greater than 0."<<endl;
            }
        } while (*(arr+i) < 0);
    }
}

int Distribution(int *arr, int size)
{
    int maxCount = 0, value;
    for(auto i = 0; i < size; i++)
    {
        int count = 0;
        for(auto j = 0; j < size; j++)
        {
            
            if(*(arr+i) == *(arr+j))
            {
                count++;
            }
        }
        if(count > maxCount)
        {
            value = *(arr+i);
            maxCount = count;
        }
    }
    if(maxCount < 2)
    {
        return -1;
    }
    size = value;
    return maxCount;
}


int main()
{   
    int size;
    int ReValue;
    do
    {
        cout<<"Number of elements you want to import: ";
        cin >> size;
        if(size <= 0)
        {
            cout<<"Please enter value greater than 0."<<endl;
        }
    } while (size <= 0);
    
    int *arr = new int [size];
    getData(arr, size);
    ReValue = Distribution(arr, size);
    if(ReValue == -1)
    {
        cout<<"No value appears more than once..."<<endl;
    }else
    {
        cout<<"The number "<<size<<" appears most with "<<ReValue<<" times"<<endl;
    }
    delete[] arr;
    return 0;
}