#include <bits/stdc++.h>
#define loop(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        set<int> posts = {0, m};
        multiset<int> lengths = {m};
        loop(i, 1, n)
        {
            int x;
            cin >> x;

            auto it = posts.lower_bound(x);
            int L = *prev(it), R = *it;
            lengths.erase(lengths.find(R - L));
            lengths.insert(x - L);
            lengths.insert(R - x);
            posts.insert(x);
            cout << *lengths.rbegin() << ' ';
        }
        cout << '\n';
    }
}