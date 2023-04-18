#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
using namespace std;
int a[100003],b[100003],l[100003];
int n,q;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>n>>q;
fo(i,1,n) l[i]=i;
fo(i,1,q) cin>>a[i]>>b[i];
for (int i=q;i>=1;--i)
l[a[i]]=l[b[i]];
fo(i,1,n) cout<<l[i]<<" ";
}
