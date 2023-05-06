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
        int x, y;
        cin >> x >> y;
        if (x == y)
            cout << "YES\n";
        else if (x < y)
            cout << "NO\n";
        else
        {
            double n = log2((double)x / y) / log2(3);
            double m = (log2((double)x / y) / log2(1.5));
            bool kt = 0;
            fo(i, 0, trunc(n))
            {
                if (kt)
                    break;
                fo(j, 0, trunc(m)) if (abs(pow(3, -i) * pow(1.5, -j) - (double)y / x) < 1e-6)
                {
                    cout << "YES\n";
                    kt = true;
                    break;
                }
            }
            if (!kt)
                cout << "NO\n";
        }
    }

    return 0;
}