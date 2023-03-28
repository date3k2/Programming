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
    int Max=a[1],d=0;
    fo(i,1,n) 
        if (a[i]>=Max) {
            Max=a[i];
            d=i;
        }
    bool kt=true;
    fo(i,1,d-1) if (a[i]>a[i+1]) {kt=false;break;}
    fo(i,d,n-1) if (a[i]<a[i+1]) {kt=false;break;}
    cout<<(kt?"YES":"NO")<<"\n";
}
return 0;
}