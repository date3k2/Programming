#include <bits/stdc++.h>
using namespace std;
/*
Nguyễn Duy Đạt - 20215343
*/
char cal(double a)
{
    if (4 <= a && a < 5.5)
        return 'D';
    if (5.5 <= a && a < 7)
        return 'C';
    if (7 <= a && a < 8.5)
        return 'B';
    if (8.5 <= a)
        return 'A';
    return 'F';
}

int main()
{
    /*
    Nguyễn Duy Đạt - 20215343
    */
    int n;
    cin >> n;
    int A = 0, B = 0, C = 0, D = 0, F = 0;
    while (n--)
    {
        int a;
        cin >> a;
        char calA = cal(a);

        if (calA == 'A')
            ++A;
        if (calA == 'B')
            ++B;
        if (calA == 'C')
            ++C;
        if (calA == 'D')
            ++D;
        if (calA == 'F')
            ++F;
    }
    cout << A << " " << B << " " << C << " " << D << " " << F;
}