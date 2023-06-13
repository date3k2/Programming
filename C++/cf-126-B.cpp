#include <bits/stdc++.h>
#define loop(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        loop(i, 0, n - 1) cin >> a[i];
        int val = a[0];
        bool check = 0;
        loop(i, 0, n - 1) if (a[i] >= val && !check)
        {
            val = a[i];
            cout << 1;
        }
        else if (a[i] < val && a[i] <= a[0] && !check)
        {
            val = a[i];
            cout << 1;
            check = true;
        }
        else if (a[i] >= val && check && a[i] <= a[0])
        {
            val = a[i];
            cout << 1;
        }
        else cout << 0;
        cout << "\n";
    }
    return 0;
}