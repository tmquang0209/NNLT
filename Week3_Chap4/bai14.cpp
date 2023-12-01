#include<iostream>
using namespace std;
int main(){
    int numStudent, count = 0;
    string nameStudent, topStudent, lastStudent;
    cout<<"Enter the number of students (1-25): ";
    cin >> numStudent;
    if(numStudent > 25 && numStudent < 1){
        cout<<"Error. Please enter number of students (1-25)";
    }else
    {
        for(int i = 0; i < numStudent; i++)
        {
            cout<<"Enter student's name: ";
            cin >> nameStudent;
            count++;
            if(i == 0)
            {
            topStudent = nameStudent;
            }
            if(count == numStudent)
            {
            lastStudent = nameStudent;
            }
        }
    }
    cout<<"Top student: "<<topStudent<<"."<<endl;
    cout<<"Last student: "<<lastStudent<<".";
}