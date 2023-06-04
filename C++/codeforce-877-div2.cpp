#include <bits/stdc++.h>
#define loop(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, maxN = 0;
        cin >> n;
        int a[n];
        loop(i, 0, n - 1) cin >> a[i];
        loop(i, 0, n - 1)
        {
            if (a[i] < 0)
            {
                maxN = a[i];
                break;
            }
            maxN = max(maxN, a[i]);
        }
        cout << maxN << "\n";
    }
    return 0;
}