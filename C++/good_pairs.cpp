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
    fo(i,1,n) cin>>a[i];
    int Min=a[1],Max=a[1],d1=0,d2=0;
    fo(i,1,n)
    {
        if (Max<=a[i]) { Max=a[i]; d1=i;}
        if (Min>=a[i]) { Min=a[i]; d2=i;}
    }
    cout<<d1<<" "<<d2<<"\n";
}
return 0;
}