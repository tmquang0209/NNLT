/*
Viết chương trình nhập vào tên và thời gian hoàn thành cuộc đua của 3 vận động viên.
Sau đó in ra xếp hạng của 3 người theo thứ tự nhất nhì ba.
Chú ý: báo lỗi nếu nhập thời gian đua là số âm
*/

#include <iostream>

using namespace std;

int main()
{

    string name1, name2, name3;
    int time1, time2, time3;

    cout << "Nhap ten VDV 1: ";
    cin >> name1;
    cout << "Nhap thoi gian hoan thanh cua " << name1 << ": ";
    cin >> time1;
    cout << "====================" << endl;
    cout << "Nhap ten VDV 2: ";
    cin >> name2;
    cout << "Nhap thoi gian hoan thanh cua " << name2 << ": ";
    cin >> time2;
    cout << "====================" << endl;
    cout << "Nhap ten VDV 3: ";
    cin >> name3;
    cout << "Nhap thoi gian hoan thanh cua " << name3 << ": ";
    cin >> time3;
    cout << "====================" << endl;

    if (time1 < 0 || time2 < 0 || time3 < 0)
    {
        cout << "Thoi gian khong hop le!" << endl;
        return 0;
    }
    if (time1 > time2 && time1 > time3)
    {
        cout << "Hang nhat: " << name1 << endl;
        if (time2 > time3)
        {
            cout << "Hang hai: " << name2 << endl;
            cout << "Hang ba: " << name3 << endl;
        }
        else
        {
            cout << "Hang hai: " << name3 << endl;
            cout << "Hang ba: " << name2 << endl;
        }
    }
    else if (time2 > time1 && time2 > time3)
    {
        cout << "Hang nhat: " << name2 << endl;
        if (time1 > time3)
        {
            cout << "Hang hai: " << name1 << endl;
            cout << "Hang ba: " << name3 << endl;
        }
        else
        {
            cout << "Hang hai: " << name3 << endl;
            cout << "Hang ba: " << name1 << endl;
        }
    }
    else
    {
        cout << "Hang nhat: " << name3 << endl;
        if (time1 > time2)
        {
            cout << "Hang hai: " << name1 << endl;
            cout << "Hang ba: " << name2 << endl;
        }
        else
        {
            cout << "Hang hai: " << name2 << endl;
            cout << "Hang ba: " << name1 << endl;
        }
    }

    return 0;
}