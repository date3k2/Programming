#include <bits/stdc++.h>
using namespace std;
struct s
{
int u,v,w;
};
bool cmp(s &a, s&b)
{
    return a.w<b.w;
}
s a[10005];
int n;
int main()
{
cin>>n;
for (int i=1;i<=n;i++)
cin>>a[i].u>>a[i].v>>a[i].w;
sort(a+1,a+n+1,cmp);
for (int i=1;i<=n;i++)
cout<<a[i].u<<" "<<a[i].v<<" "<<a[i].w<<endl;
}
