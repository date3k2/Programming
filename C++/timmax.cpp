#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
#define MAX 1000000007
using namespace std;
int t;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n+3];
        fo(i,0,n-1) cin>>a[i];
        sort(a,a+n);
        ll mAx=0;
        fo(i,0,n-1) mAx= (mAx+ ((a[i]*i)% MAX))%MAX;
        cout<<mAx<<"\n";
    }
        return 0;
}