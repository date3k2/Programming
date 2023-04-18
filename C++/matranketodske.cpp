#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int n;
int a[1005][1005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    set<int> vt[n + 5];
    fo(i, 1, n)
        fo(j, 1, n)
    {
        cin >> a[i][j];
        if (a[i][j] == 1)
        {
            vt[i].insert(j);
            vt[j].insert(i);
        }
    }
    fo(i, 1, n)
    {
        for (auto u : vt[i])
            cout << u << " ";
        cout << "\n";
    }
    return 0;
}