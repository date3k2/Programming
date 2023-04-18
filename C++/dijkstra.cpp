#include <bits/stdc++.h>
using namespace std;
vector <pair<int,int>> a[105];
int m,n,k;
int main()
{
cin>>n>>m>>k;
for (int i=1;i<=m;i++)
{
    int u,v,s;
    cin>>u>>v>>s;
    a[u].emplace_back(v,s);
    a[v].emplace_back(u,s);
}


return 0;
}
