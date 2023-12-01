#include<iostream>
using namespace std;

int doSomething(int &, int &);


int doSomething(int *x, int *y)
{
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}

int main()
{
    int result,
        variableA, variableB;
        do
        {
            cin >> variableA;
            cin >> variableB;
            if(variableA < 0 || variableB < 0)
            {
                cout<<"Please enter value greater than 0."<<endl;
            }
        } while (variableA < 0 || variableB < 0);
         
    result = doSomething(&variableA, &variableB);
    cout<<result;    
    return 0;
}