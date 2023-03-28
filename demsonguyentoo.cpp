#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int t;
int m[1000005];
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>t;
ll a[t+1],n=0;
fo(i,1,t) {
    cin>>a[i];
    n=max(n,a[i]);
}
bool kt[n+3];
fill(kt+1,kt+n,0);
fo(i,2,n)
{
    if (kt[i]==1) continue;
    int j=2;
    while (i*j<=n) 
    {
        kt[i*j]=1;
        ++j;
    }
}
m[3]=1;
fo(i,4,n) m[i]=m[i-1]+(1-kt[i-1]);
fo(i,1,t) cout<<m[a[i]]<<"\n";
return 0;
}