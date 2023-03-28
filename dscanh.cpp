#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int t;
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int v, e;
        cin >> v >> e;
        set<int> vt[v+5];
        fo(i, 1, e)
        {
            int U, V;
            cin >> U >> V;
            vt[U].insert(V);
            vt[V].insert(U);
        }
        fo(i, 1, v)
        {
            cout << i << ": ";
            for (int u : vt[i])
                cout << u << " ";
            cout << "\n";
        }
    }
    return 0;
}