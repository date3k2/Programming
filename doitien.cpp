#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int t;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n, d = 0;
        cin >> n;
        d += n / 1000;
        n = n - (n / 1000) * 1000;
        d += n / 500;
        n = n - (n / 500) * 500;
        d += n / 200;
        n = n - (n / 200) * 200;
        d += n / 100;
        n = n - (n / 100) * 100;
        d += n / 50;
        n = n - (n / 50) * 50;
        d += n / 20;
        n = n - (n / 20) * 20;
        d += n / 10;
        n = n - (n / 10) * 10;
        d += n / 5;
        n = n - (n / 5) * 5;
        d += n / 2;
        n = n - (n / 2) * 2;
        d += n;
        cout << d << "\n";
    }
    return 0;
}