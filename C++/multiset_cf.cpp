#include <bits/stdc++.h>
#define loop(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int main()
{
    int q;
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> q;
    multiset<pair<int, int>> segments;
    while (q--)
    {
        char query;
        int x, y;
        cin >> query >> x >> y;
        if (query == '+')
        {
            segments.insert({x, y});
        }
        else
        {
            auto it = segments.find({x, y});
            // segments.erase(it);
            cout << (it == segments.end()) << '\n';
        }
        // auto it = segments.begin();
        // int L = it->first, R = it->second;
        // auto it2 = segments.end();
        // int L2 = (--it2)->first, R2 = it2->second;
        // if (R < L2)
        //     cout << "YES\n";
        // else
        //     cout << "NO\n";
    }
    return 0;
}