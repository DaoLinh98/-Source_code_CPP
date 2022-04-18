
//Lập trình tính tiền lương tháng theo số ngày công và lương ngày công
#include <iostream>
using namespace std;

int main()
{

    int ngayCongChuan = 24;
    long luongNgay = 500000;
    long long tienLuongThang;
    int ngayCongThut;
    cout << "NHẬP VÀO SỐ NGÀY CÔNG THỰT CỦA CÔNG NHÂN: ";
    cin >> ngayCongThut;
    if (ngayCongThut <= 0)
    {
        cout << "\nNGÀY CÔNG KHÔNG HỢP LỆ!" << endl;
    }
    else if (ngayCongThut <= ngayCongChuan)
    {
        tienLuongThang = ngayCongThut * luongNgay;
        cout << "\nTIỀN LƯƠNG THANG: " << tienLuongThang << " VND";
    }
    else if (ngayCongThut > ngayCongChuan)
    {
        tienLuongThang = (ngayCongChuan * luongNgay) + ((ngayCongThut - ngayCongChuan) * (luongNgay * 2));
        cout << "TIEN LUONG THANG CÓ TĂNG CA: " << tienLuongThang << " VND";
    }

    return 0;
}
