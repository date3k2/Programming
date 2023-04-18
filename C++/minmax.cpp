#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
using namespace std;
int n,k,u,v,a[50005],pmax[50005],pmin[50005];
void update(int p,int val)
{
for(; p<=n;p+= p & (-p))
{
pmax[p]=max(pmax[p],val);
pmin[p]=min(pmin[p],val);
}
}
long long tim(int i, int j)
{
    int ma=0,mi=INT_MAX;
 while (j>=i)
 {
    if ( j - (j& (-j) )>= i)
    {
       ma=max(ma,pmax[j]);
       mi=min(mi,pmin[j]);
       j-= j & (-j);
    }
    else
    {
        ma=max(ma,a[j]);
       mi=min(mi,a[j]);
       --j;
    }
 }
return ma-mi;
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>n>>k;
fo(i,1,n) pmin[i]=INT_MAX;
fo(i,1,n)
{
cin>>a[i];
update(i,a[i]);
}
fo(i,1,k)
{
cin>>u>>v;
cout<<tim(u,v)<<"\n";
}
//(i,1,n)  cout<<pmax[i]<<" ";cout<<"\n";
//fo(i,1,n) cout<<pmin[i]<<" ";
}
