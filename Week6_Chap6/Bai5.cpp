/*
Một vườn thú địa phương muốn theo dõi xem mỗi con trong ba con khỉ của họ ăn bao
nhiêu pound thức ăn mỗi ngày trong một tuần. Viết chương trình lưu trữ thông tin này
trong một mảng hai chiều cỡ 3 x 5, trong đó mỗi hàng đại diện cho một con khỉ và mỗi
cột đại diện cho một ngày trong tuần. Trước tiên, chương trình cần để người dùng nhập
dữ liệu cho mỗi con khỉ. Sau đó, nó sẽ hiển thị báo cáo gồm các thông tin sau:
 Lượng thức ăn trung bình mỗi ngày của cả gia đình khỉ.
 Lượng ăn ít nhất xét trên cả tuần và mọi con khỉ
 Lượng ăn nhiều nhất xét trên cả tuần và mọi con khỉ
 Xác thực đầu vào: Không chấp nhận số âm cho số pound thực phẩm đã ăn.
*/

#include <iostream>
using namespace std;

const int ROW = 3,
          COL = 5;

void averageAmountOfFood(double[][COL]);
void highestAmountOfFood(double[][COL]);
void lowestAmountOfFood(double[][COL]);

int main()
{
    double arr[ROW][COL];
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            do
            {
                cout << "Nhap luong thuc an cua con khi " << i + 1 << " trong ngay " << j + 1 << ": ";
                cin >> arr[i][j];
            } while (arr[i][j] < 0);
        }
        cout << "---------------------" << endl;
    }
    averageAmountOfFood(arr);
    highestAmountOfFood(arr);
    lowestAmountOfFood(arr);
}

void averageAmountOfFood(double arr[][COL])
{
    double total = 0, totalEachMonkey;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            total += arr[i][j];
            totalEachMonkey += arr[i][j];
        }
        cout << "Luong thuc an cua con khi #" << i + 1 << ": " << totalEachMonkey / COL << endl;
        totalEachMonkey = 0;
    }
    cout << "Luong thuc an cua ca dan khi: " << total / (ROW * COL) << endl;
    cout << "-------------------------" << endl;
}

void highestAmountOfFood(double arr[][COL])
{
    double max = arr[0][0], maxEachMonkey = arr[0][0];
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
            if (arr[i][j] > maxEachMonkey)
                maxEachMonkey = arr[i][j];
        }
        cout << "Luong thuc an nhieu nhat cua con khi #" << i + 1 << ": " << maxEachMonkey << endl;
        maxEachMonkey = arr[i + 1][0];
    }
    cout << "Luong thuc an nhieu nhat trong tuan: " << max << endl;
    cout << "-------------------------" << endl;
}

void lowestAmountOfFood(double arr[][COL])
{
    double min = arr[0][0], minEachMonkey = arr[0][0];
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
            if (arr[i][j] < minEachMonkey)
            {
                minEachMonkey = arr[i][j];
            }
        }
        cout << "Luong thuc an it nhat cua con khi #" << i + 1 << ": " << minEachMonkey << endl;
        minEachMonkey = arr[i + 1][0];
    }
    cout << "Luong thuc an it nhat trong tuan: " << min << endl;
    cout << "-------------------------" << endl;
}