//Tính n! bằng dệ quy
#include <iostream>
using namespace std;

int giaiThua(int n)
{
    if (n == 1)
        return 1;
    else
        return n * giaiThua(n - 1);
}

int main()
{
    int n;
    cout << "NHẬP VÀO GIÁ TRỊ CẦN TÍNH GIAI THỪA: ";
    cin >> n;
    cout << "GIAI THUA CUA "<<n<<" = "<<giaiThua(n);

    return 0;
}
