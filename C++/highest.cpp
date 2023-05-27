#include <bits/stdc++.h>
#define loop(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int main()
{
    // freopen("high.inp", "r", stdin);
    // freopen("high.out", "w", stdout);
    int n,s=0,max_h=0;
    // while (cin>>n)
    // {
    //     s+=n;
    //     max_h=max(max_h,s);
    // }
    cin>>n;
    loop(i,1,n)
    {
        int x;
        cin>>x;
        s+=x;
        max_h=max(max_h,s);
    }
    cout<<max_h;
    return 0;
}