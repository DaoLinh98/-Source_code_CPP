//Tính tổng 1+2+....+n

#include <iostream>
using namespace std;

int tongDeQuy(int n)
{
    if (n == 0)
        return 0;
    else
        return n + tongDeQuy(n - 1);
}

int main()
{
    int n;
    cout << "NHẬP VÀO GIÁ TRỊ NGUYÊN N: ";
    cin >> n;
    cout << "TỔNG CỦA 1+2+...+N = " << tongDeQuy(n);

    return 0;}
