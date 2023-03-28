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
sort(a+1,a+1+n);
if (a[1]!=1) {
    cout<<1;
    exit(0);
}
ll s=0;
int i=1;
while (i<n) {
    s+=a[i];
    if (s<a[i+1]-1) {
        cout<<s+1;
        exit(0);
    }
    ++i;
}
cout<<s+a[n]+1;
return 0;
}