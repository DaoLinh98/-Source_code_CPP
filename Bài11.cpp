
//Lập trình hàm xuất ra mã nhị phân của số nguyên n 
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "nhap vao so nguyen N= ";
    cin >> n;
    cout << "\nSo " << n << " chuyen sang nhi phan la: ";
    int x[100];
    int luu = 0;
    while (n != 0)
    {
        x[luu] = n % 2;
        luu++;
        n = n / 2;
    }

    for (int i = luu - 1; i >= 0; i--)
    {
        cout << x[i];
    }
    return 0;
}
