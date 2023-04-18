#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int n,x;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n>>x;
int a[n+1];
fo(i,1,n) cin>>a[i];
sort(a+1,a+1+n);
int dem=0,i=1;
//fo(i,1,n) cout<<a[i]<<" ";
while (i<n)
{
    ++dem;
    if (a[i]+a[n]<=x) 
    {
        ++i;
        --n;
    }
    else --n;
}
if (i==n) ++dem;
cout<<dem;
return 0;
}