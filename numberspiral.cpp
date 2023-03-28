#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int n;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
fo(i,1,n)
    {
        long long x,y;
        long long k;
        cin>>x>>y;
        if (x==y) k=x*x-x+1;else
        if (max(x,y)==x)
        {
            if (x %2==0) k=x*x-y+1; else k=(x-1)*(x-1)+y;
        }
        else { if (y %2==0) k=(y-1)*(y-1)+x; else k=y*y-x+1; }
    cout<<k<<"\n";
    }
return 0;
}