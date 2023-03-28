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
fo(i,1,n) cin>>a[i];
ll s=0,Max=a[1];
fo(i,1,n)
{
    s+=a[i];
    Max=max(s,Max);
    if (s<0) s=0;
}
cout<<Max;
return 0;
}