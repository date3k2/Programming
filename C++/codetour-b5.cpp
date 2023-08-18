#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    string op;
    cin >> op;
    int count = 0;
    for (auto i : op)
    {
        if (i == '-')
            ++count;
    }

    if (count == 0)
    {
        for (int i = 0; i < m; i++)
        {
            int l, r;
            cin >> l >> r;
            cout << n - (r - l) << endl;
        }
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            int l, r;
            cin >> l >> r;
            int x = 0, maxs = 0, mins = 0;
            for (int i = 0; i < l - 1; ++i)
            {
                if (op[i] == '-')
                    --x;
                else
                    ++x;
                maxs = max(maxs, x);
                mins = min(mins, x);
            }
            for (int i = r; i < op.size(); ++i)
            {
                if (op[i] == '-')
                    --x;
                else
                    ++x;
                maxs = max(maxs, x);
                mins = min(mins, x);
            }
            cout << maxs - mins + 1 << "\n";
        }
    }
    return 0;
}
