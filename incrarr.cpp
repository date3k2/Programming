#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int n,a[200005];
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
fo(i,1,n) cin>>a[i];
ll dem=0;
fo(i,1,n-1)
if (a[i]<=a[i+1]) continue;
else {dem+=a[i]-a[i+1]; a[i+1]=a[i]; } 
cout<<dem;
return 0;
}