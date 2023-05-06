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
        int n;
        cin >> n;
        int a[n];
        int m01 = 2e6, m10 = 2e6, m11 = 2e6;
        fo(i, 0, n - 1)
        {
            string s;
            cin >> a[i]>>s;
            if (s=="01")
            m01 = min(m01, a[i]);
            else if (s=="10")
            m10 = min(m10, a[i]);
            else if (s=="11")
            m11 = min(m11, a[i]);
        }
        if (m11==2e6 && (m01==2e6 || m10==2e6))
        cout<< -1<<"\n"; else
        cout<<min(m01 + m10, m11)<<'\n';
    }
    return 0;
}