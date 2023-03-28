#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
ll n;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
if ((n*(n+1)/2) %2==1) cout<<"NO";
else {
    cout<<"YES \n";
    cout<<n/2+ (n&1)<<"\n";
    fo(i,1,n/4) cout<<i<<" "<<n+1-i<<" ";
    if (n&1) cout<<(n+1)/4<<" "<<(n+1)/2;
    cout<<"\n"<<n/2<<"\n";
    fo(i,(n+(n&1))/4+1,n/2) cout<<i<<" "<<n+1-i<<" ";
    if (n&1) cout<<(3*n+3)/4;
}
return 0;
}