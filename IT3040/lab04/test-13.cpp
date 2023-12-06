#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, a, b) for (int i = a; i != b; ++i)
#define F first
#define S second
struct Castle
{
    int a, k;
};
int n, s;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n >> s;
    int a, k;
    priority_queue<pair<int, int>> pq;
    priority_queue<pair<int, int>> pq2;
    loop(i, 0, n)
    {
        cin >> a >> k;
        pq.push({k, a});
    }
    while (!pq.empty() && s > 0)
    {
        auto t = pq.top();
        if (!pq2.empty())
        {
            auto t2 = pq2.top();
            if (t2.F >= t.F)
            {
                pq2.pop();
                --s;
                continue;
            }
        }
        pq.pop();
        int x = t.S / t.F;
        x = min(x, s);
        s -= x;
        t.S -= x * t.F;
        if (t.second > 0)
            pq2.push({t.S, t.F});
    }
    int ans = 0;
    while (!pq.empty())
    {
        ans += pq.top().S;
        pq.pop();
    }
    while (!pq2.empty())
    {
        ans += pq2.top().F;
        pq2.pop();
    }
    cout << ans;
    return 0;
}