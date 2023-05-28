#include <bits/stdc++.h>
#define loop(i, l, h) for (int i = l; i < h; ++i)
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
        int a[n + 1], b[n + 1];
        loop(i, 0, n) cin >> a[i];
        loop(i, 0, n) cin >> b[i];
        a[n] = 10e6 + 1;
        b[n] = 10e6 + 1;
        unordered_map<int, int> m1, m2;
        int max_seq_a = 1, max_seq_b = 1;
        loop(i, 0, n)
        {
            if (a[i] == a[i + 1])
                max_seq_a += 1;
            else
            {
                m1[a[i]] = max(m1[a[i]], max_seq_a);
                max_seq_a = 1;
            }
            if (b[i] == b[i + 1])
                max_seq_b += 1;
            else
            {
                m2[b[i]] = max(m2[b[i]], max_seq_b);
                max_seq_b = 1;
            }
        }
        int ans = 1;
        loop(i, 0, n)
        {
            ans = max(ans, m1[a[i]] + m2[a[i]]);
            ans = max(ans, m1[b[i]] + m2[b[i]]);
        }
        cout << ans << "\n";
    }
    return 0;
}