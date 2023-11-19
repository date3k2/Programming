#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int gcd2(int a, int b)
{

    // # Khử đệ quy
    /*****************
    Nguyễn Duy Đạt - 20215343
    *****************/
    int r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl
         << gcd2(a, b);
    return 0;
}