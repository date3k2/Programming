#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int t;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>t;
while (t--)
{
    int n,m;
    cin>>n;
    int a[n+3];
    fo(i,1,n) {
    cin>>a[i];
    m=max(m,a[i]);
}
bool kt[m+3];
fill(kt+1,kt+m,0);
fo(i,2,m)
{
    if (kt[i]==1) continue;
    int j=2;
    while (i*j<=n) 
    {
        kt[i*j]=1;
        ++j;
    }
}
    

}
return 0;
}