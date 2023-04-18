#include <bits/stdc++.h>
using namespace std;
int n,a[200005],p[200005],d[200005],par[200005],s,kt[200005];
vector<int> ad[200005];
int main()
{
freopen("Summax3.inp","r",stdin);
freopen("Summax3.out","w",stdout);
 cin>>n;
for (int i=1;i<=n;i++)
{
    cin>>a[i];
    d[i]=a[i];
}
for (int i=1;i<=n;i++)
{
 cin>>p[i];
 ad[p[i]].push_back(i);
 par[i]=p[i];
}
fill(kt+1,kt+n+1,-1);
//s=0;
//for (int i=n;i>=2;i--)
//{
//if ((ad[i].size()==0)) continue;
//int sum=0;
//for (auto v : ad[i])
//{
//
//    if (kt[v]<0)
// sum=sum+a[v];
//}
//sum=sum+a[par[i]];
//if (d[i]<sum)
//kt[i]++;
//d[i]=min(d[i],sum);
//s=s+d[i];
//}
for (int i=1;i<=n;i++)
{
int s1=d[i];
for (auto v:ad[i]) s1=s1+a[v];
d[i]=min(d[i],s1);
int s2=a[par[i]];
for (auto v:ad[i])
    if (ad[i].size()!=0)
{
if (par[i]==0) continue;
s2=s2+d[v];
}
d[i]=s2;
}
for (int i=1;i<=n;i++) cout<<d[i]<<" ";















cout<<s<<endl;
}
