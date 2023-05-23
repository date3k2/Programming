#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    fo(i, 0, n - 1) cin >> a[i];
    sort(a, a + n);
    ll count = 0, sum = 0, cost = -a[0], last = 0;
    queue<ll> q;
    fo(i, 0, n - 1)
    {
        if (count++ < k)
            if (!q.empty() && q.front() <= a[i])
            {
                last = q.front();
                sum += last;
                q.pop();
            }
            else
            {
                sum += a[i];
                last = a[i];
            }
        else
        {
            q.push(sum);
            sum = 0;
            count = 0;
            cost += last;
        }
    }

    // fo(i, 0, n - 1)
    // {
    //     sum += a[i];
    // }
    // // cout << sum;
    // if (!q.empty())
    //     cout << q.front();
    return 0;
}