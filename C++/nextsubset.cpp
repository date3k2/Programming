#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int t;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n>>k;
        int a[k+1];
        a[0]=0;
        fo(i,1,k) cin>>a[i];
        int d=n,p=0;
        for (int i = k; i >= 1; i--)
        {
            if (a[i]<d--) 
            {
                ++a[i];
                p=i;
                break;
            }
        }
        fo(i,1,p) cout<<a[i]<<" ";
        fo(i,p+1,k) cout<<++a[p]<<" ";
        cout<<"\n";
        
    }
    return 0;
}