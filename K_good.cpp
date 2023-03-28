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
    ll n;
    cin>>n;
    bool kt=0;
    if (n%2==1) cout<<2<<"\n";
    else {
        fo(i,3,trunc(sqrt(2*n)))
        {
            double k=((2*n-i*i)/i+1)/2;
            if (floor(k)==k)
            {
                cout<<i<<"\n";
                kt=1;
                break;
            }
        }
         if (kt==0) cout<<"-1"<<"\n";
    }
}
return 0;
}