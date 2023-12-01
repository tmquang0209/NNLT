#include <iostream>
#include <string>

using namespace std;

const int NUM_NAMES = 20;

void selectionSort(string[]);
void output(string[]);

int main()
{
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                               "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                               "Taylor, Terri", "Johnson, Jill",
                               "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                               "James, Jean", "Weaver, Jim", "Pore, Bob",
                               "Rutherford, Greg", "Javens, Renee",
                               "Harrison, Rose", "Setzer, Cathy",
                               "Pike, Gordon", "Holland, Beth"};
    selectionSort(names);
    output(names);

    return 0;
}

void selectionSort(string arr[])
{
    int min;
    string temp;
    for (int i = 0; i < NUM_NAMES - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < NUM_NAMES; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void output(string arr[])
{
    for (int i = 0; i < NUM_NAMES; i++)
    {
        cout << arr[i] << endl;
    }
}