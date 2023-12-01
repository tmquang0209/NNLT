#include <iostream>
using namespace std;

// Function prototypes
void arrSelectSort(int *[], int);
void showArray(const int [], int);
void showArrPtr(int *[], int);

void arrSelectSort(int *arrPtr[], int NUM_DONATIONS)
{
    int min;
    for(auto i = 0; i < NUM_DONATIONS - 1; i++)
    {
        min = i;
        for(int j = i + 1; j < NUM_DONATIONS; j++)
        {
            if((*arrPtr[j]) < (*arrPtr[min])) //so sánh giá trị mà con trỏ trỏ tới địa chỉ
            {
                min = j;
            }
        }
        swap((arrPtr[i]), (arrPtr[min])); // đổi chỗ địa chỉ
    }
}

void showArrPtr(int *arrPtr[], int NUM_DONATIONS)
{
    for(auto i = 0; i < NUM_DONATIONS; i++)
    {
        cout<<*(arrPtr[i])<<" ";
    }
}

void showArray(const int donations[], int size)
{
    for (int count = 0; count < size; count++)
        cout << donations[count]<< " ";
    cout << endl;
}


int main()
{
    const int NUM_DONATIONS = 15; // Number of donations
    
    int donations[NUM_DONATIONS] = { 5, 100, 5, 25,10,195, 25, 5,
                                     5, 100, 2010, 15, 10, 5, 10};

    int *arrPtr[NUM_DONATIONS] = { nullptr, nullptr,nullptr, nullptr, nullptr,
                                   nullptr, nullptr,nullptr, nullptr, nullptr, 
                                   nullptr, nullptr,nullptr, nullptr, nullptr};

    for (int count = 0; count < NUM_DONATIONS; count++)
    {
        arrPtr[count] = &donations[count];
    }
    cout<<endl;
    arrSelectSort(arrPtr, NUM_DONATIONS);
    cout << "The donations, sorted in ascending order, are: \n";
    showArrPtr(arrPtr, NUM_DONATIONS);
    cout<<endl;
    cout << "The donations, in their original order, are: \n";
    showArray(donations, NUM_DONATIONS);
    return 0;
}