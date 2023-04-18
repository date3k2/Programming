#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int n,m,k;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n>>m>>k;
int a[n+1],b[m+1];
fo(i,1,n) cin>>a[i];
sort(a+1,a+1+n);
fo(i,1,m) cin>>b[i];
sort(b+1,b+1+m);
int i=1,j=1,dem=0;
while (i<=n && j<=m) 
{
    if (b[j]<a[i]-k) ++j;
    else
    if (b[j]>a[i]+k) ++i;
    else {
        ++dem;
        ++i;
        ++j;
    }

}
cout<<dem;
return 0;
}