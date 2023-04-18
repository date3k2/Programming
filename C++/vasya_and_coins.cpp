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
    int a,b;
    cin>>a>>b;
    if (a==0) cout<<1<<"\n";
    else {
        cout<<(ll)a+2*b+1<<"\n";
    }
}
return 0;
}