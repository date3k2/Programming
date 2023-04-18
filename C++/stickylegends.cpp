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
int a[n+3];
ll s=0;
fo(i,1,n) cin>>a[i];
sort(a+1,a+1+n);
fo(i,1,n) s+=abs(a[(1+n)/2]-a[i]);
cout<<s;
return 0;
}