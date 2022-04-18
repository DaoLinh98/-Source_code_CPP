
//Tính tổng không sử dụng đệ quyy

#include <iostream>
using namespace std;

int sum(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
        s += i;
    return s;
}

int main()
{
    int result;
    result = sum(5);
    cout << "SUM: " << result;

    return 0;
}

//Tính tổng sử dụng đệ quy
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
    int result;
    result = tongDeQuy(5);
    cout << "SUM: " << result;

    return 0;
}


