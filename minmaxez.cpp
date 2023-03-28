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
fo(k,1,t)
{
    int n,x,maxx=-1e9,minn=1e9;
    cin>>n;
    fo(i,1,n)
    {
        cin>>x;
        maxx=max(x,maxx);
        minn=min(x,minn);
    }
    if (minn==maxx)  cout<<minn<<"\n";
    else {
         cout<<maxx<<" "<<minn<<"\n";
    }
}
return 0;
}