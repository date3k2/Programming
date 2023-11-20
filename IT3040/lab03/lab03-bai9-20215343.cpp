#include <bits/stdc++.h>
using namespace std;
/*
Nguyen Duy Dat 20215343
*/
bitset<50> b;
int n, k1, k2;
void print_sol()
{
    // check not over 2 consecutive 0
    for (int i = 1; i <= n - 1; ++i)
        if (b[i] == 0 && b[i + 1] == 0)
            return;
    // check number of consecutive 1 in range [k1, k2]
    int cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (b[i])
            cnt++;
        else if (cnt > 0)
        {
            if (cnt < k1 || cnt > k2)
                return;
            cnt = 0;
        }
    }
    if (cnt > 0 && (cnt < k1 || cnt > k2))
        return;
    for (int i = 1; i <= n; ++i)
        cout << b[i];
    cout << '\n';
}
void TRY(int i)
{
    for (int j = 0; j <= 1; ++j)
    {
        b[i] = j;
        if (i == n)
            print_sol();
        else
            TRY(i + 1);
    }
}
int main()
{
    /*
    Nguyen Duy Dat 20215343
    */
    cin >> n >> k1 >> k2;
    TRY(1);
    return 0;
}