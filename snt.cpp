#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
ll n;
int main()
{
    cin >> n;
    if (n <= 1)
    {
        cout << "NO";
        exit(0);
    }
    fo(i, 2, trunc(sqrt(n))) if (n % i == 0)
    {
        cout << "NO";
        exit(0);
    }
    cout << "YES";
    return 0;
}