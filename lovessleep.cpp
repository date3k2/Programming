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
    int n,H,M;
    cin>>n>>H>>M;
    int k=H*60+M,Min=10e8;
    int h[n+3],m[n+3],r[n+3];
    fo(i,1,n)
    {
        cin>>h[i]>>m[i];
        r[i]=h[i]*60+m[i];
        r[i]=(r[i]-k>=0)?r[i]-k:r[i]-k+24*60;
        Min=min(Min,r[i]);
    }
    cout<<Min/60<<" "<<Min%60<<"\n";
}
return 0;
}