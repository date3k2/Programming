#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, a, b) for (int i = a; i != b; ++i)
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
    loop(i, 0, n)
    {
        cin >> a >> k;
        pq.push({k, a});
    }
    while (!pq.empty() && s > 0)
    {
        auto t = pq.top();
        pq.pop();
        int x = t.second / t.first;
        x = min(x, s);
        s -= x;
        t.second -= x * t.first;
        cout << x << " " << s << endl;
        if (t.second > 0)
            pq.push(t);
        break;
    }
    // print
    while (!pq.empty())
    {
        auto t = pq.top();
        pq.pop();
        cout << t.first << " " << t.second << endl;
    }
    return 0;
}