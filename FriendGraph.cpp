#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int t;
int check[100005];
vector<int> vt[100005];
int dem=1;
void dfs(int u)
{
    for(auto v: vt[u]) {
        if (check[v]==1) {
            check[v]=(++dem);
            dfs(v);
        }
    }
}
 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n, m,Max=0;
        cin >> n >> m;
        fo(i, 1, m)
        {
            int u, v;
            cin >> u >> v;
            vt[u].push_back(v);
            vt[v].push_back(u);
        }
        fo(i,1,n) check[i]=1;
        fo(i,1,n) {
            if (check[i]==1) {dem=1;check[i]=2;dfs(i);}
            if (Max<check[i]) Max=check[i];
        }
        // cout<<Max<<"\n";
    }
    return 0;
}