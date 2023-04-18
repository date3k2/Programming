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
    if (n%2==1)
    {
    cout<<1<<" ";
    for(int i=2;i<=n;i+=2) cout<<i+1<<" "<<i<<" ";
    }
    else fo(i,1,n/2) cout<<2*i<<" "<<2*i-1<<" ";
    cout<<"\n";
}
return 0;
}