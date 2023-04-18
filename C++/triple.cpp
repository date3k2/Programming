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
    bool kt=0;
    map<int,int> m;
     fo(i,1,n)
    {
        cin>>a[i];
        ++m[a[i]];
    }
    for (auto x:m)
        if (x.second>=3)
        {
            cout<<x.first<<"\n";
            kt=1;
            break;
        }
    if (kt==0) cout<<"-1\n";

}
return 0;
}