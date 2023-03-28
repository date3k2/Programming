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
        int n;
        cin >> n;
        int s = pow(trunc(sqrt(2 * n - 2)), 2);
        if (s == n - 1)
        {
            for (int i = n - 1; i >= 0; --i)
                cout << i << " ";
            cout << "\n";
        }
        else
        {
            --n;
            int d = n;
            int a[n + 3];
            bool kt[n + 3];
            fo(i, 0, n)
            {
                a[i] = i;
                kt[i] = 0;
            }
            while (n >= 0)
            {
                if (s - a[n] >= 0 && s - a[n] <= d && kt[s - a[n]] == 0)
                {
                    a[n] = s - a[n];
                    kt[a[n]] = 1;
                }
                else
                {
                    s = pow((trunc(sqrt(s)) - 1), 2);
                    continue;
                }
                --n;
            }
            fo(i, 0, d) cout << a[i] << " ";
            cout << "\n";
        }
    }
    return 0;
}