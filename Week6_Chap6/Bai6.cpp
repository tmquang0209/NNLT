/*
Một nhà khí tượng nghiệp dư cần thu thập thông tin thời tiết trong suốt ba tháng mùa
hè năm vừa rồi; nên đã ghi chú một ngày là mưa (‘R’), có mây (‘C’) hoặc nắng (‘S’).
Viết chương trình lưu trữ thông tin này dưới dạng mảng ký tự cỡ 3 x 30, trong đó hàng
để chỉ các tháng mùa hè (quy ước, 0 = tháng 6, 1 = tháng 7, 2 = tháng 8) và cột để chỉ
các ngày trong tháng. Không cần ghi chép dữ liệu cho ngày 31 của bất kỳ tháng nào.
Chương trình sẽ bắt đầu bằng cách đọc dữ liệu thời tiết từ một tệp. Sau đó, cho mỗi
tháng và cho cả ba tháng, chương trình sẽ hiển thị có bao nhiêu ngày mưa, ngày mây,
và ngày nắng. Nó cũng sẽ báo cáo tháng nào trong số ba tháng có số ngày mưa lớn
nhất. Dữ liệu cho chương trình cần lưu trong tệp RainOrShine.txt.
*/

#include <iostream>
#include <fstream>
using namespace std;

const int ROW = 3,
          COL = 30;
const string FILE_LOCATION = "/FileData/RainOrShine.txt";

const string WEATHER_DAY_TYPE[ROW] = {"Mua", "May", "Nang"};
const char WEATHER_DAY_NAME[ROW] = {'R', 'C', 'S'};
const int MONTH[ROW] = {6, 7, 8};

void readFile(char[][COL]);
void displayThreeMonth(char[][COL], int);
void displayEveryMonth(char[][COL], int);
void displayHightestRain(char[][COL]);

int main()
{
    char arr[ROW][COL];
    readFile(arr);

    for (int i = 0; i < ROW; i++)
        displayEveryMonth(arr, i);

    cout << endl
         << endl;
    for (int i = 0; i < ROW; i++)
        displayThreeMonth(arr, i);

    cout << endl
         << endl;
    displayHightestRain(arr);
    return 0;
}

void readFile(char array[][COL])
{
    ifstream file("./FileData/RainOrShine.txt");

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            file >> array[i][j];
        }
    }

    file.close();
}

void displayEveryMonth(char array[][COL], int month)
{
    for (int i = 0; i < ROW; i++)
    {
        int total = 0;
        for (int j = 0; j < COL; j++)
            if (array[month][j] == WEATHER_DAY_NAME[i])
                total++;

        cout << "Thang " << MONTH[month] << " co " << total << " ngay " << WEATHER_DAY_TYPE[i] << "." << endl;
    }
    cout << endl;
}

void displayThreeMonth(char array[][COL], int month)
{
    int count = 0;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
            if (array[i][j] == WEATHER_DAY_NAME[month])
                count++;
    }
    cout << "Co " << count << " ngay " << WEATHER_DAY_TYPE[month] << " trong 3 thang." << endl;
}

void displayHightestRain(char array[][COL])
{
    int max = 0;
    int month = 0;
    for (int i = 0; i < ROW; i++)
    {
        int total = 0;
        for (int j = 0; j < COL; j++)
            if (array[i][j] == WEATHER_DAY_NAME[i])
                total++;

        if (total > max)
        {
            max = total;
            month = i;
        }
    }
    cout << "Thang " << MONTH[month] << " co " << max << " ngay " << WEATHER_DAY_TYPE[month] << "." << endl;
}