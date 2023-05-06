#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
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
        int a[n];
        int max_zero = 0, z = 0;
        fo(i, 0, n - 1)
        {
            cin >> a[i];
            if (a[i] == 0)
                ++z;
            else
            {
                max_zero = max(max_zero, z);
                z = 0;
            }
        }
        max_zero = max(max_zero, z);
        cout << max_zero << "\n";
    }
    return 0;
}