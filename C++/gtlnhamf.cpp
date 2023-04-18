#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int n;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
int a[n+5];
ll s[n+5];
s[0]=0;
fo(i,1,n) cin>>a[i];
fo(i,1,n) s[i]=s[i-1]+a[i]+abs(a[i]);
ll maxx=s[1];
fo(i,1,n) maxx=max(s[i],maxx);
cout<<maxx;
return 0;
}