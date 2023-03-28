#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
using namespace std;
int n,a[200005];
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
fo(i,1,n-1) cin>>a[i];
sort(a,a+n);
bool kt=0;
fo(i,1,n-1) 
 if (a[i]!=i) {cout<<i;kt=1; break;};
if (kt==0) cout<<n;
return 0;
}
