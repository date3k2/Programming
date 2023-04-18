#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
short t;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>t;
ll du=1e9+7;
fo(k,1,t)
{
    int n,x;
    ll s=0,tich=1;
    cin>>n;
    fo(i,1,n)
    {
        cin>>x;
        s=(s+x % du) %du;
        tich=(tich*x % du) %du;
    }
    cout<<s<<" "<<tich<<"\n";
}
return 0;
}