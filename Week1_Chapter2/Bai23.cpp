/*
Chương trình giao dịch cổ phiếu
Tháng trước Joe đã mua một số cổ phiếu tại Acme Software, Inc. Dưới đây là chi
tiết của việc mua:
 Số lượng cổ phiếu mà Joe mua là 1.000.
 Khi Joe mua cổ phiếu, anh ta trả 45,50 đô la cho mỗi cổ phiếu.
 Joe đã trả cho người môi giới chứng khoán của mình một khoản hoa hồng lên
tới 2% số tiền anh ta trả cho cổ phiếu.
Hai tuần sau, Joe bán cổ phiếu. Dưới đây là chi tiết của đợt giảm giá:
 Số cổ phiếu mà Joe đã bán là 1.000.
 Anh đã bán cổ phiếu với giá 56,90 USD / cổ phiếu.
 Anh ta đã trả cho người môi giới chứng khoán của mình một khoản hoa hồng
khác lên tới 2% số tiền anh ta nhận được cho cổ phiếu.
Viết chương trình hiển thị thông tin sau:
 Số tiền Joe đã trả để mua cổ phiếu.
 Số tiền hoa hồng Joe trả cho người môi giới của mình khi anh ta mua cổ phiếu.
 Số tiền mà Joe đã có được khi bán cổ phiếu
 Số tiền hoa hồng Joe đã trả cho người môi giới của mình khi anh ta bán cổ
phiếu.
Hiển thị số lợi nhuận mà Joe kiếm được sau khi bán cổ phiếu của mình và trả hai
khoản hoa hồng cho người môi giới của anh ấy. (Nếu số lợi nhuận mà chương trình
của bạn hiển thị là một số âm, thì Joe đã mất tiền trong giao dịch.)
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int CO_PHIEU_MUA = 1000,
              CO_PHIEU_BAN = 1000;
    const float GIA_CO_PHIEU_MUA = 45.50,
                GIA_CO_PHIEU_BAN = 56.90,
                HOAT_DONG_MUA = 0.02,
                HOAT_DONG_BAN = 0.02;

    float soTienMua = CO_PHIEU_MUA * GIA_CO_PHIEU_MUA,
          soTienBan = CO_PHIEU_BAN * GIA_CO_PHIEU_BAN,
          soTienMuaHoaHong = soTienMua * HOAT_DONG_MUA,
          soTienBanHoaHong = soTienBan * HOAT_DONG_BAN,
          tongTienHoaHong = soTienBanHoaHong + soTienMuaHoaHong,
          loiNhuan = (soTienBan - soTienMua) - tongTienHoaHong;

    cout << "So tien mua co phieu: " << soTienMua << endl;
    cout << "So tien ban co phieu: " << soTienBan << endl;
    cout << "So tien mua hoa hong tra MG luc mua: " << soTienMuaHoaHong << endl;
    cout << "So tien ban hoa hong tra MG luc ban: " << soTienBanHoaHong << endl;
    cout << "Tong tien hoa hong: " << tongTienHoaHong << endl;
    cout << "Loi nhuan: " << loiNhuan << endl;
    return 0;
}