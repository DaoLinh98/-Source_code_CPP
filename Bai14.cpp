
//Biến đổi cấu trúc lệnh lặp for thành lệnh lặp điều kiện trước
// bằng ví dụ cụ thể
#include <iostream>
using namespace std;

int giaiThuaFor(int n)
{
    int ketQua = 1;
    for (int i = 1; i <= n; i++)
        ketQua = ketQua * i;
    return ketQua;
}

int giaiThuaWhile(int n)
{
    int ketQua = 1;
    int i = 1;
    while (i <= n)
    {
        ketQua = ketQua * i;
        i++;
    }
    return ketQua;
}

int main()
{
    cout << "GIAI THỪA FOR CỦA 9 LÀ: " << giaiThuaFor(9) << endl;
    cout << "GIAI THỪA WHILE CỦA 9 LÀ: "<< giaiThuaWhile(9);

    return 0;
}
