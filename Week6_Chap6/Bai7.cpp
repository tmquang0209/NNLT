/*
Viết chương trình yêu cầu người dùng nhập tên tệp. Giả sử tệp chứa một chuỗi số, mỗi
số được viết trên một dòng. Chương trình sẽ đọc nội dung của tệp thành một mảng sau
đó hiển thị các thông tin sau:
 Số thấp nhất trong mảng
 Số cao nhất trong mảng
 Tổng các số trong mảng
 Giá trị trung bình của các số trong mảng
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers;
    string fileName;

    cout << "Enter file name: ";
    cin >> fileName;

    fileName = "./FileData/" + fileName + ".txt";
    ifstream numberFile(fileName);
    if (numberFile)
    {
        int num;
        while (numberFile >> num)
        {
            numbers.push_back(num);
        }
    }
    else
    {
        cout << "File is not open" << endl;
        exit(0);
    }

    int min = numbers[0];
    int max = numbers[0];
    int sum = 0;
    double average = 0;

    for (int i = 1; i < numbers.size(); i++)
    {
        if (numbers[i] < min)
            min = numbers[i];
        if (numbers[i] > max)
            max = numbers[i];
        sum += numbers[i];
    }

    average = (double)sum / numbers.size();

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    return 0;
}
