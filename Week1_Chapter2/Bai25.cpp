/*
Viết một chương trình chơi chữ với người dùng. Chương trình sẽ thực hiện hỏi những
dùng những thông tin sau đây:
 Tên của người chơi
 Tuổi của người chơi
 Tên thành phố
 Tên trường đại học
 Lĩnh vực chuyên môn
 Loại động vật
 Tên thú cưng
Sau khi người dùng nhập vào những thông tin này, chương trình sẽ hiển thị một câu
truyện như sau, với việc chèn các thông tin của người dùng vào các vị trí tương ứng
thích hợp:
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name, city, college, profession, animal, pet, age;
    cout << "Nhap ten: ", getline(cin, name);
    cout << "Nhap tuoi: ", getline(cin, age);
    cout << "Nhap ten thanh pho: ", getline(cin, city);
    cout << "Nhap ten truong dai hoc: ", getline(cin, college);
    cout << "Nhap linh vuc chuyen mon: ", getline(cin, profession);
    cout << "Nhap loai dong vat yeu thich: ", getline(cin, animal);
    cout << "Nhap ten thu cung: ", getline(cin, pet);

    cout << "There once was a person named " << name << " who lived in " << city;
    cout << ". At the age of " << age << ", " << name << " went to college at " << college << ". ";
    cout << name << " graduated and went to work as a " << profession << ".";
    cout << " Then, " << name << " adopted a(n) " << animal << " named " << pet << ".They both lived happily ever after !";
    return 0;
}