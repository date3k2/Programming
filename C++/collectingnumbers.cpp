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
int m[n+3];
fo(i,1,n) {
    int x;
    cin>>x;
    m[x]=i;
}
int dem=1,i=1;
while (i<n) {
    if (m[i+1]<m[i]) ++dem;
    ++i;
}
cout<<dem;
return 0;
}