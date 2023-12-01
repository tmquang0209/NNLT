#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void displayMenu();
void doMenu(vector<string> &, vector<string> &);
void readFile(vector<string> &, string);
void output(vector<string> &);
string inputValidate(string &);
void searchName(vector<string> &, string);

int main()
{
    vector<string> arrBoyNames;
    vector<string> arrGirlNames;

    readFile(arrBoyNames, "BoyNames");
    readFile(arrGirlNames, "GirlNames");

    output(arrBoyNames);
    output(arrGirlNames);

    doMenu(arrBoyNames, arrGirlNames);
}

void displayMenu()
{
    cout << "1. Tim kiem ten be trai" << endl;
    cout << "2. Tim kiem ten be gai" << endl;
    cout << "3. Tim kiem ten be trai va be gai" << endl;
    cout << "4. Thoat chuong trinh" << endl;
}

void doMenu(vector<string> &arrBoyNames, vector<string> &arrGirlNames)
{
    int choice;
    string boyName, girlName;
    bool flag = true;
    do
    {
        displayMenu();
        cout << "Moi chon >>";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Nhap ten be trai: ";
            boyName = inputValidate(boyName);
            searchName(arrBoyNames, boyName);
            break;
        case 2:
            cout << "Nhap ten be gai: ";
            girlName = inputValidate(girlName);
            searchName(arrGirlNames, girlName);
            break;
        case 3:
            cout << "Nhap ten be trai: ";
            boyName = inputValidate(boyName);

            cout << "Nhap ten be gai: ";
            girlName = inputValidate(girlName);

            searchName(arrBoyNames, boyName);
            searchName(arrGirlNames, girlName);

            break;
        case 4:
            cout << "Da thoat chuong trinh" << endl;
            flag = false;
            break;
        default:
            cout << "Lua chon khong hop le!" << endl;
            break;
        }

    } while (flag);
}

void searchName(vector<string> &arr, string name)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == name)
        {
            cout << "======================================================" << endl;
            cout << "Tim thay ten " << name << " trong danh sach" << endl;
            cout << "======================================================" << endl;
            return;
        }
    }
    cout << "======================================================" << endl;
    cout << "Khong tim thay ten " << name << " trong danh sach" << endl;
    cout << "======================================================" << endl;
}

string inputValidate(string &str)
{
    cin >> str;
    return str;
}

void readFile(vector<string> &arr, string fileName)
{
    string vectorElement;
    ifstream fileOpen("./FileData/" + fileName + ".txt");
    while (getline(fileOpen, vectorElement))
    {
        arr.push_back(vectorElement);
    }
}

void output(vector<string> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << (i + 1) << " " << arr[i] << endl;
    }
}