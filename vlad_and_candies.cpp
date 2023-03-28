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
    int n;
    cin>>n;
    int a[n+3];
    map <int,int> m;
    int Max=a[1];
    fo(i,1,n) 
    {cin>>a[i];
    ++m[a[i]];
    if(a[i]>Max) Max=a[i];
    }
    if (n==1 && a[1]==1) {cout<<"YES"<<"\n";continue;}
    if (m[Max]>1 || m[Max-1]>=1) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}
return 0;
}