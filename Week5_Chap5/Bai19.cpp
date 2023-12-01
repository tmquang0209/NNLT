/*
Modify Programming Challenge 15, Overloaded Hospital, to write the report it creates
to a file.
*/
/*
Write a program that computes and displays the charges for a patient’s hospital stay.
First, the program should ask if the patient was admitted as an in-patient or an outpatient. If the patient was an in-patient, the following data should be entered:
• The number of days spent in the hospital
• The daily rate
• Hospital medication charges
• Charges for hospital services (lab tests, etc.)
The program should ask for the following data if the patient was an out-patient:
• Charges for hospital services (lab tests, etc.)
• Hospital medication charges
The program should use two overloaded functions to calculate the total charges. One
of the functions should accept arguments for the in-patient data, while the other function accepts arguments for out-patient information. Both functions should return the
total charges.
Input Validation: Do not accept negative numbers for any data.
*/
#include <iostream>
#include <fstream>

using namespace std;

double inputValidate(double);
void inPatient();
void outPatient();
void createAndWriteToFile(double, double, double, double, double, double);

int main()
{
    int choice;
    bool flag = true;
    do
    {
        cout << "1. Ngoai tru" << endl;
        cout << "2. Noi tru" << endl;
        cout << "0. Thoat" << endl;
        cout << "Moi chon >";
        cin >> choice;
        switch (choice)
        {
        case 1:
            outPatient();
            break;
        case 2:
            inPatient();
            break;
        case 0:
            flag = false;
            break;
        default:
            cout << "Moi chon lai" << endl;
            break;
        }
    } while (flag);
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
void inPatient()
{
    double numOfDaysInHospital,
        dailyRate,
        medicationCharges,
        labCharges,
        totalCharges;
    cout << "Nhap so ngay vao benh vien: ";
    numOfDaysInHospital = inputValidate(numOfDaysInHospital);
    cout << "Nhap gia tien ngay: ";
    dailyRate = inputValidate(dailyRate);
    cout << "Nhap chi phi thuoc benh vien: ";
    medicationCharges = inputValidate(medicationCharges);
    cout << "Nhap chi phi kham benh: ";
    labCharges = inputValidate(labCharges);
    totalCharges = numOfDaysInHospital * dailyRate + medicationCharges + labCharges;
    cout << "Tong chi phi: " << totalCharges << endl;
    createAndWriteToFile(1, labCharges, medicationCharges,
                         totalCharges, numOfDaysInHospital, dailyRate);
}

void outPatient()
{
    double labCharges,
        medicationCharges,
        totalCharges;
    cout << "Nhap chi phi kham benh: ";
    labCharges = inputValidate(labCharges);
    cout << "Nhap chi phi thuoc benh vien: ";
    medicationCharges = inputValidate(medicationCharges);
    totalCharges = labCharges + medicationCharges;
    cout << "Tong chi phi: " << totalCharges << endl;
    createAndWriteToFile(2, labCharges, medicationCharges, totalCharges, 0, 0);
}

void createAndWriteToFile(double type, double labCharges, double medicationCharges,
                          double totalCharges, double numOfDaysInHospital, double dailyRate)
{

    ofstream outFile;
    outFile.open("HospitalCharges.txt", ios::app);
    if (type == 1)
    {
        outFile << "Loai: Noi tru"
                << "| So ngay nam vien: " << numOfDaysInHospital
                << "| Gia tien/ngay: " << dailyRate
                << "| Chi phi thuoc: " << medicationCharges
                << "| Chi phi kham benh: " << labCharges << endl;
    }
    else if (type == 2)
    {
        outFile << "Loai: Ngoai tru"
                << "| Chi phi thuoc: " << medicationCharges
                << "| Chi phi kham benh: " << labCharges << endl;
    }
    outFile.close();
}