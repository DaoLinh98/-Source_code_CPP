//Hàm kiểm tra số nguyên n có là số nguyên tố hay không

#include <iostream>
#include <math.h>
using namespace std;
//int ktraNT(int x);
int main()
{

    int n;
    int demuoc = 0;
    cout << "Nhap vao mot gia tri: ";
    cin >> n;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            demuoc++;
    }
    if (demuoc == 0 && n > 2)
    {
        cout << "So " << n << " la so nguyen to!";
    }
    else
    {
        cout << "So " << n << " Khong phai so nguyen to!";
    }

    return 0;
}
